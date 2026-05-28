#include <Windows.h>

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		MessageBoxA(
			nullptr,
			"Rock SDK loaded!",
			"rock-sdk",
			MB_OK
		);
	}

	return TRUE;
}