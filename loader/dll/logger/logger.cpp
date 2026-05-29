#include "logger.hpp"

#include <Windows.h>
#include <iostream>
#include <cstdio>

namespace Logger
{
	void Init()
	{
		AllocConsole();

		FILE* file;
		freopen_s(&file, "CONOUT$", "w", stdout);

		SetConsoleTitleA("Rock SDK | Logger");
	}

	void Info(const std::string& message)
	{
		std::cout << "[INFO] " << message << std::endl;
	}

	void Warn(const std::string& message)
	{
		std::cout << "[WARNING] " << message << std::endl;
	}

	void Error(const std::string& message)
	{
		std::cout << "[ERROR] " << message << std::endl;
	}
}
