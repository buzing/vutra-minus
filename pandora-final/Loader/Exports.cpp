#include "Exports.h"

__declspec( dllexport ) netvars_t g_netvars;

__declspec( dllexport ) interfaces_t g_interfaces;

__declspec( dllexport ) patterns_t g_patterns {
	147,
		pattern_t{ "client.dll", "FF 90 ? ? ? ? 83 3D ? ? ? ? ? 7E 1C", 0 },
		pattern_t{ "client.dll", "0F 10 05 ? ? ? ? 8D 85 ? ? ? ? B9", 0 },
		pattern_t{ "client.dll", "FF 90 ? ? ? ? 8B 07 8B CF FF 90 ? ? ? ? 8B CF", 0 },
		pattern_t{ "client.dll", "C7 87 ? ? ? ? ? ? ? ? 83 BF ? ? ? ? ? 75 0C", 0 },
		pattern_t{ "client.dll", "55 8B EC 81 EC BC 00 00 00 53 56 57", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 8B 4D 08 BA ? ? ? ? E8 ? ? ? ? 85 C0 75 12", 0 },
		pattern_t{ "client.dll", "84 C0 75 04 B0 01 5F", 0 },
		pattern_t{ "client.dll", "E8 ? ? ? ? FF 76 0C 8D 48 04 E8", 0 },
		pattern_t{ "client.dll", "8D 9A ? ? ? ? 89 45 9C", 0 },
		pattern_t{ "client.dll", "74 43 8B 81 ? ? ? ? 89 45 FC", 0 },
		pattern_t{ "client.dll", "53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 56 57 8B 7B", 0 },
		pattern_t{ "client.dll", "E8 ? ? ? ? F3 0F 10 4D ? 83 C4 08 F3 0F 10 45 ? F3 0F 59 C0", 0 },
		pattern_t{ "client.dll", "FF 90 ? ? ? ? FF 35 ? ? ? ? 8B 4C 24 3C", 0 },
		pattern_t{ "client.dll", "55 8B EC 56 57 8B F9 8B B7 E8", 0 },
		pattern_t{ "client.dll", "FF 90 ? ? ? ? 8B 86 ? ? ? ? 83 F8 FF", 0 },
		pattern_t{ "client.dll", "3B 3D ? ? ? ? 75 4C", 0 },
		pattern_t{ "client.dll", "6A 00 FF 50 3C 8B 0D ? ? ? ? FF B7", 0 },
		pattern_t{ "client.dll", "FF 50 3C 8B 4C 24 20", 0 },
		pattern_t{ "client.dll", "0F 82 ? ? ? ? FF 50 3C", 0 },
		pattern_t{ "client.dll", "FF B7 ? ? ? ? 8B 01 FF 90 ? ? ? ? 8B 4C 24 24", 0 },
		pattern_t{ "client.dll", "84 C0 75 38 8B 0D ? ? ? ? 8B 01 8B 80", 0 },
		pattern_t{ "client.dll", "FF 50 4C 8B 06 8D 4D F4", 0 },
		pattern_t{ "client.dll", "89 1D ? ? ? ? 8B C3", 0 },
		pattern_t{ "client.dll", "55 8B EC 8B 55 08 83 EC 1C F6 42 1C 01", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 83 EC 5C 53 8B D9 56 57 83", 0 },
		pattern_t{ "client.dll", "E8 ? ? ? ? 80 BE ? ? ? ? ? 0F 84 ? ? ? ? 8B 06", 0 },
		pattern_t{ "client.dll", "80 3D ?? ?? ?? ?? ?? 74 16 A1 ?? ?? ?? ?? 48 C7 81", 0 },
		pattern_t{ "client.dll", "FF B7 ?? ?? ?? ?? 52", 0 },
		pattern_t{ "client.dll", "8B 89 ?? ?? ?? ?? 8D 0C D1", 0 },
		pattern_t{ "client.dll", "8D 8F ?? ?? ?? ?? 6A 01 C7 87", 0 },
		pattern_t{ "client.dll", "8D 87 ?? ?? ?? ?? 50 E8 ?? ?? ?? ?? 8B 06", 0 },
		pattern_t{ "client.dll", "8B B7 ?? ?? ?? ?? 89 74 24 20", 0 },
		pattern_t{ "client.dll", "FF 15 ?? ?? ?? ?? 80 BE ?? ?? ?? ?? ?? 0F 84 ?? ?? ?? ??", 0 },
		pattern_t{ "client.dll", "89 86 ?? ?? ?? ?? E8 ?? ?? ?? ?? FF 75 08", 0 },
		pattern_t{ "client.dll", "8B 8F ?? ?? ?? ?? 89 4C 24 1C", 0 },
		pattern_t{ "client.dll", "8D 9A ?? ?? ?? ?? 89 45 9C", 0 },
		pattern_t{ "client.dll", "74 43 8B 81 ?? ?? ?? ?? 89 45 FC", 0 },
		pattern_t{ "client.dll", "E8 ? ? ? ? 83 7D D8 00 7C 0F", 0 },
		pattern_t{ "client.dll", "8A 87 ?? ?? ?? ?? 8D 5F F8", 0 },
		pattern_t{ "client.dll", "8B 8E ?? ?? ?? ?? 85 C9 74 3E", 0 },
		pattern_t{ "client.dll", "89 86 ?? ?? ?? ?? E8 ?? ?? ?? ?? 80 BE ?? ?? ?? ?? ??", 0 },
		pattern_t{ "client.dll", "80 BF ?? ?? ?? ?? ?? 0F 84 ?? ?? ?? ?? 83 BF ?? ?? ?? ?? ?? 74 7C", 0 },
		pattern_t{ "client.dll", "83 BE ? ? ? ? ? 7F 67", 0 },
		pattern_t{ "client.dll", "C6 86 ? ? ? ? ? FF 50 04", 0 },
		pattern_t{ "client.dll", "80 BF ?? ?? ?? ?? ?? 0F 85 ?? ?? ?? ?? F3 0F 7E 87 ?? ?? ?? ??", 0 },
		pattern_t{ "client.dll", "56 8B F1 0F 57 C0 C7 86 ?? ?? ?? ?? ?? ?? ?? ??", 0 },
		pattern_t{ "client.dll", "E8 ?? ?? ?? ?? FF 75 08 8B 8E ?? ?? ?? ??", 0 },
		pattern_t{ "client.dll", "E8 ?? ?? ?? ?? 8B 87 ?? ?? ?? ?? 8D 8C 24 ?? ?? ?? ?? 8B 7C 24 18", 0 },
		pattern_t{ "client.dll", "E8 ?? ?? ?? ?? F3 0F 10 45 ?? 8D 84 24 ?? ?? ?? ??", 0 },
		pattern_t{ "client.dll", "53 8B D9 F6 C3 03 74 0B FF 15 ?? ?? ?? ?? 84 C0 74 01 CC C7 83 ?? ?? ?? ?? ?? ?? ?? ?? 8B CB", 0 },
		pattern_t{ "client.dll", "56 8B F1 57 8D 8E ?? ?? ?? ?? E8 ?? ?? ?? ?? 8D 8E ?? ?? ?? ?? E8 ?? ?? ?? ?? 83 BE ?? ?? ?? ?? ??", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 EC 08 8B 45 08 56 57 8B F9 8D 8F", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F0 81 EC ?? ?? ?? ?? 33 D2", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F0 81 EC ?? ?? ?? ?? 8B 81", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 EC 10 53 8B D9 89 55 F8 56 57 89 5D F4 8B 0B 89 4D F0", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F0 B8 ?? ?? ?? ?? E8 ?? ?? ?? ?? A1 ?? ?? ?? ??", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 EC 10 53 56 57 8B 7D 10 8B D9 F3 0F 11 5D ??", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 81 EC ?? ?? ?? ?? 8B C1 89 54 24 04 89 44 24 2C 56 57 8B 00", 0 },
		pattern_t{ "client.dll", "8B 0D ?? ?? ?? ?? 8B 46 08 68", 0 },
		pattern_t{ "client.dll", "B9 ?? ?? ?? ?? F3 0F 11 04 24 FF 50 10", 0 },
		pattern_t{ "client.dll", "8B 0D ?? ?? ?? ?? BA ?? ?? ?? ?? E8 ?? ?? ?? ?? 83 C4", 0 },
		pattern_t{ "client.dll", "89 ? ? ? ? ? F3 0F 10 48 20", 0 },
		pattern_t{ "client.dll", "A1 ?? ?? ?? ?? F6 44 F0 04 01 74 0B", 0 },
		pattern_t{ "client.dll", "0F 11 05 ?? ?? ?? ?? 83 C8 01", 0 },
		pattern_t{ "client.dll", "85 C0 75 30 38 86", 0 },
		pattern_t{ "client.dll", "A1 ?? ?? ?? ?? FF 10 A1 ?? ?? ?? ?? B9", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 EC 08 8B 15 ?? ?? ?? ?? 0F 57 C0", 0 },
		pattern_t{ "client.dll", "8B 35 ? ? ? ? 8D 4C 24 20", 0 },
		pattern_t{ "client.dll", "B9 ?? ?? ?? ?? E8 ?? ?? ?? ?? 8B 5D 08", 0 },
		pattern_t{ "client.dll", "56 52 FF 50 18", 0 },
		pattern_t{ "client.dll", "A2 ? ? ? ? 8B 45 E8", 0 },
		pattern_t{ "client.dll", "3B 3D ?? ?? ?? ?? 75 4C", 0 },
		pattern_t{ "client.dll", "56 8D 51 3C BE", 0 },
		pattern_t{ "client.dll", "0F B7 05 ? ? ? ? 3D ? ? ? ? 74 3F", 0 },
		pattern_t{ "client.dll", "8B 0D ?? ?? ?? ?? 85 C0 74 0A 8B 01 FF 50 78 83 C0 54", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 51 53 56 57 8B F1 E8", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1 E8", 0 },
		pattern_t{ "client.dll", "55 8B EC 51 56 8B F1 85 F6 74 68", 0 },
		pattern_t{ "client.dll", "55 8B EC 51 53 56 8B 75 08 8B D9 57 6B FE 2C 89 5D FC", 0 },
		pattern_t{ "client.dll", "55 8B EC 56 8B F1 B9 ?? ?? ?? ?? C7 46", 0 },
		pattern_t{ "client.dll", "56 6A 01 68 ?? ?? ?? ?? 8B F1", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3 0F 11 54 24", 0 },
		pattern_t{ "client.dll", "55 8B EC 53 8B 5D 08 56 8B F1 83", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3 56 83 E0 04", 0 },
		pattern_t{ "client.dll", "56 8B F1 57 8B BE ?? ?? ?? ?? 83 EF 01 78 72 90 8B 86", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 EC 10 53 56 57 8B F9 8B 87 ?? ?? ?? ?? C1 E8 16", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 EC 0C 53 56 8B 71 58", 0 },
		pattern_t{ "client.dll", "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28", 0 },
		pattern_t{ "client.dll", "53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 56 57 8B 7B", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 83 EC 70 6A 58 8D 44 24 1C 89 4C 24 08 6A 00 50", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 51 53 56 8B D9 8B 0D", 0 },
		pattern_t{ "client.dll", "55 8B EC 8B 45 08 57 8B F9 8B 4F 04 85 C9 75 15 8B", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 EC 48 53 8B 5D 08 89 4D F4", 0 },
		pattern_t{ "client.dll", "E8 ?? ?? ?? ?? 8D 47 FC", 0 },
		pattern_t{ "client.dll", "E8 ? ? ? ? A1 ? ? ? ? F3 0F 10 45 ? F3 0F 11 40", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F0 83 EC 7C 56 52", 0 },
		pattern_t{ "client.dll", "E8 ?? ?? ?? ?? 83 7E 10 00 74 64", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 EC 1C 8B 0D ? ? ? ? 53 56", 0 },
		pattern_t{ "client.dll", "53 56 57 8B F9 33 F6 8B 4F 60 8B 01 FF 90 2C 04 00 00 89 47 64", 0 },
		pattern_t{ "client.dll", "E8 ? ? ? ? 5E 83 F8 FF", 0 },
		pattern_t{ "client.dll", "55 8B EC 81 EC ? ? ? ? 56 8B F1 8B 4D 08", 0 },
		pattern_t{ "client.dll", "55 8B EC 51 56 8B F1 80 BE ? ? ? ? ? 74 36", 0 },
		pattern_t{ "client.dll", "55 8B EC 81 EC 88 00 00 00 56 8B F1", 0 },
		pattern_t{ "client.dll", "FF 90 ?? ?? ?? ?? 83 3D ?? ?? ?? ?? ?? 7E 1C", 0 },
		pattern_t{ "client.dll", "FF 90 ?? ?? ?? ?? 8B 07 8B CF FF 90 ?? ?? ?? ?? 8B CF", 0 },
		pattern_t{ "client.dll", "8B CF FF 90 ? ? ? ? 8B CF E8 ? ? ? ? 8B CF", 0 },
		pattern_t{ "client.dll", "C7 87 ?? ?? ?? ?? ?? ?? ?? ?? 83 BF ?? ?? ?? ?? ?? 75 0C", 0 },
		pattern_t{ "client.dll", "83 3D ? ? ? ? ? 7E 1C", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 81 EC 84 00 00 00 53 8B D9 56 57 83 BB 50 32", 0 },
		pattern_t{ "client.dll", "0F 2F 15 ? ? ? ? 0F 86 ? ? ? ? F3 0F 7E 4C 24", 0 },
		pattern_t{ "client.dll", "C6 05 ? ? ? ? ? 89 47 70", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 8B 75 08 57 8B F9 85 F6", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F0 81 EC ? ? ? ? 56 57 8B F9 8B 0D ? ? ? ? 89 7C 24 1C", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 81 EC ?? ?? ?? ?? 53 56 8B F1 57 89 74 24 1C", 0 },
		pattern_t{ "client.dll", "55 8B EC A1 ? ? ? ? 83 EC 10 56 8B F1 B9", 0 },
		pattern_t{ "client.dll", "A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 0F 85", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F8 F3 0F 10 42", 0 },
		pattern_t{ "client.dll", "55 8B EC 83 E4 F0 83 EC 78 56 8B F1 57 8B 56", 0 },

		pattern_t{ "engine.dll", "55 8B EC 81 EC ?? ?? ?? ?? 53 56 57 8B 3D ?? ?? ?? ?? 8A", 0 },
		pattern_t{ "engine.dll", "75 30 8B 87 ?? ?? ?? ??", 0 },
		pattern_t{ "engine.dll", "74 0F 80 BF ?? ?? ?? ?? ??", 0 },
		pattern_t{ "engine.dll", "03 05 ? ? ? ? 83 CF 10", 0 },
		pattern_t{ "engine.dll", "55 8B EC 83 EC 08 56 8B F1 8B 86 ?? ?? ?? ?? 85 C0", 0 },
		pattern_t{ "engine.dll", "FF 50 34 8B 1D ? ? ? ? 85 C0 74 16 FF B6", 0 },
		pattern_t{ "engine.dll", "FF 50 34 85 C0 74 12 53 FF 75 0C 68", 0 },
		pattern_t{ "engine.dll", "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 57 8B F9 89 7C 24 18", 0 },
		pattern_t{ "engine.dll", "55 8B EC 83 E4 C0 81 EC ? ? ? ? 53 56 57 8B 7D 08 8B D9", 0 },
		pattern_t{ "engine.dll", "55 8B EC 81 EC ? ? ? ? 56 57 8B F9 C7 45", 0 },
		pattern_t{ "engine.dll", "53 56 57 8B DA 8B F9 FF 15", 0 },
		pattern_t{ "engine.dll", "55 8B EC 80 7D 0C 00 F3 0F 10 4D", 0 },
		pattern_t{ "engine.dll", "55 8B EC 53 8B 5D 08 56 8B F1 85 DB 74 57 8B 4E 14 83 F9 10 72 04 8B 06 EB 02", 0 },
		//pattern_t{ "engine.dll", "B9 ? ? ? ? 80 65 FC FE 6A 00", 0 },
		pattern_t{ "engine.dll", "8B 0D ? ? ? ? 8D 95 ? ? ? ? 6A 00 C6", 0 },
		pattern_t{ "engine.dll", "55 8B EC 81 EC ? ? ? ? 53 8B D9 89 5D F8 80", 0 },
		pattern_t{ "engine.dll", "E8 ?? ?? ?? ?? 84 C0 8B 45 08", 0 },
		pattern_t{ "engine.dll", "55 8B EC 83 EC 08 53 8B 1D ? ? ? ? 56 57 83 BB ? ? 00 00 06", 0 },

		pattern_t{ "server.dll", "8B 15 ? ? ? ? 33 C9 83 7A 18 01", 0 },
		pattern_t{ "server.dll", "8D 87 ? ? ? ? 89 46 08 C7 46 ? ? ? ? ? EB 06", 0 },
		pattern_t{ "server.dll", "8B 8F ?? ?? ?? ?? 85 C9 74 06 56", 0 },
		pattern_t{ "server.dll", "FF 86 ?? ?? ?? ?? 8B CE 89 86 ?? ?? ?? ??", 0 },

		pattern_t{ "shaderapidx9.dll", "A1 ?? ?? ?? ?? 50 8B 08 FF 51 0C", 0 },
		pattern_t{ "shaderapidx9.dll", "55 8B EC 83 E4 F8 81 EC ? ? ? ? 53 56 57", 0 },

		pattern_t{ "gameoverlayrenderer.dll", "E8 ? ? ? ? 53 FF 15 ? ? ? ? 8B C7", 0 },
		pattern_t{ "gameoverlayrenderer.dll", "56 B9 ? ? ? ? E8 ? ? ? ? 84 C0 74 1C", 0 },
};

__declspec( dllexport ) uint32_t g_text_start;
__declspec( dllexport ) uint32_t g_text_size;
__declspec( dllexport ) uint32_t g_text_hash;

bool g_is_cracked;