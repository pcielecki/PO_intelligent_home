#include "../../Incl/SH_System/Command.hpp"
#include "../../Incl/SH_System/SH_System.hpp"

void
SH_System::ProcessLine(string& line)
{
	CommandFactory cf;

	this->CurrentCommand = cf.ComposeCommand(line);

	this->ExtractCommandName(line);

	this->CurrentCommand->Execute(line);
}

void SH_System::ExtractCommandName(string& line)
{
	throw "NOT implemented!";
}
