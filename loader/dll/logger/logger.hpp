#pragme once

#include <string>

namespace Logger
{
	void Init();

	void Info(const std::string& message);
	void Warn(const std::string& message);
	void Error(const std::string& message);
}