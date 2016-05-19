#include "../../Incl/SH_System/Command.hpp"
#include "../../Incl/SH_System/SH_System.hpp"

void
SH_System::ProcessLine(string& line)
{
	CommandFactory cf;
	Command* cmd;

	cmd = cf.ComposeCommand(line);

	this->ExtractCommandName(line);

	cmd->Execute(line);
}

void SH_System::ExtractCommandName(string& line)
{
	throw "NOT implemented!";
}
