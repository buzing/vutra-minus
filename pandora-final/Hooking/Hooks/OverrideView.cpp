#include "../Hooked.hpp"
#include "../../SDK/Classes/Player.hpp"
#include "../../SDK/Classes/weapon.hpp"
#include "../../Utils/InputSys.hpp"
#include "../../Features/Visuals/GrenadePrediction.hpp"
#include "../../SDK/Classes/PropManager.hpp"
#include "../../Features/Miscellaneous/Miscellaneous.hpp"

void __fastcall Hooked::OverrideView(void* ECX, int EDX, CViewSetup* vsView) {
	g_Vars.globals.szLastHookCalled = XorStr("18");
	C_CSPlayer* local = C_CSPlayer::GetLocalPlayer();

	bool bOk = g_Vars.globals.RenderIsReady && vsView && local != nullptr && m_pEngine->IsInGame();

	if (bOk) {
		if (!local->IsDead()) {
			g_GrenadePrediction.View();

			auto weapon = (C_WeaponCSBaseGun*)(local->m_hActiveWeapon().Get());
			if (weapon) {
				if (g_Vars.esp.instant_scope) {
					if (local->m_bIsScoped()) (weapon->m_zoomLevel() == 2) ? vsView->fov = g_Vars.esp.world_fov / 2 : vsView->fov = g_Vars.esp.world_fov;
					else vsView->fov = g_Vars.esp.world_fov;
				}
				else vsView->fov = g_Vars.esp.world_fov;
			}
		}
	}

	if (bOk)
		g_Misc.ThirdPerson();

	oOverrideView(ECX, vsView);

	if (g_Vars.esp.remove_post_proccesing && bOk) {
		vsView->m_iEdgeBlur = 0;
	}
}
