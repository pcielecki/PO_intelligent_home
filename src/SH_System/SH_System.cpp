#include "../../Incl/SH_System/Command.hpp"
#include "../../Incl/SH_System/SH_System.hpp"

void
SH_System::ProcessLine(string& line)
{
	CommandFactory cf;
	Command* cmd;

	cmd = cf.ComposeCommand(line);

	this->ExtractCommandName(line);


	cmd->SetSystem(this);
	cmd->Execute(line);
}

void SH_System::ExtractCommandName(string& line)
{
	throw "NOT implemented!";
}

Smart_house::Adapter* FindAdapterByView(const string& userID, const string& ViewID)
{

}

Smart_house::Adapter* FindAdapterByModel(const string& userID, const string& ViewID)
{

}
