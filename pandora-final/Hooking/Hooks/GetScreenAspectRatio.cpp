#include "../hooked.hpp"

namespace Hooked
{
	float __fastcall GetScreenAspectRatio(void* ECX, void* EDX, int32_t iWidth, int32_t iHeight) {
		g_Vars.globals.szLastHookCalled = XorStr("10");
		return g_Vars.esp.aspect_ratio ? g_Vars.esp.aspect_ratio_value : oGetScreenAspectRatio(ECX, iWidth, iHeight);
	}
}