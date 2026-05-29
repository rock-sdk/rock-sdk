#include <Windows.h>

#include "logger/logger.hpp"

DWORD WINAPI InitThread(LPVOID)
{
	Logger::Init();

	Logger::Info("Rock SDK loading...");

	Logger::Info("Rock SDK loaded!");

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