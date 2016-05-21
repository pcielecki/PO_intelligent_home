#include "../../Incl/Utils/SystemLog.hpp"

#include <string>
#include <iostream>
using std::string;



void
SystemLog::log(const string& line)
{
	std::cout << line << std::endl;
}
