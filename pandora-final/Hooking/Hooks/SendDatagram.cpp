#include "../Hooked.hpp"
#include "../../SDK/Classes/Player.hpp"
#include "../../Features/Rage/LagCompensation.hpp"

#define NET_FRAMES_BACKUP 64 // must be power of 2. 
#define NET_FRAMES_MASK ( NET_FRAMES_BACKUP - 1 )

int __fastcall Hooked::SendDatagram(INetChannel* ecx, void* edx, void* a3) {
	if (!(g_Vars.misc.fake_latency && g_Vars.misc.fake_latency_bind.enabled) || a3 || !m_pEngine->IsInGame())
	{
		return oSendDatagram(ecx, a3);
	}

	int instate = ecx->m_nInReliableState;
	int insequencenr = ecx->m_nInSequenceNr;

	g_LagCompensation.AddLatencyToNetchan(ecx, g_Vars.misc.fake_latency_amount / 1000.f);

	int ret = oSendDatagram(ecx, a3);

	ecx->m_nInReliableState = instate;
	ecx->m_nInSequenceNr = insequencenr;

	return ret;
}

void __fastcall Hooked::ProcessPacket(INetChannel* ecx, void* edx, void* a3, bool a4) {
	oProcessPacket(ecx, a3, a4);

	g_LagCompensation.UpdateIncomingSequences();

	constexpr auto te_fire_bullets = hash_32_fnv1a_const("CTEFireBullets");
	for (auto event = *(CEventInfo**)(uintptr_t(m_pClientState.Xor()) + 0x4DEC); event; event = event->pNextEvent)
	{
		auto v25 = event->pClientClass;
		if (v25)
		{
			if (hash_32_fnv1a_const(v25->m_pNetworkName) == te_fire_bullets)
				event->fire_delay = 0.0f;
		}
	}

	m_pEngine->FireEvents();
}