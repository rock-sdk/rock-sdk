#include <Windows.h>

DWORD WINAPI InitThread(LPVOID)
{
	MessageBoxA(
		nullptr,
		"Rock SDK loaded!",
		"Rock SDK",
		MB_OK
	);

	return 0;
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(module);

		CreateThread(
			nullptr,
			0,
			InitThread,
			nullptr,
			0,
			nullptr
		);
	}

	return TRUE;
}