#include "../../Incl/SH_System/SH_System.hpp"
#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/SH_System/Commands/CreateCommand.hpp"
#include "../../Incl/SH_System/Command.hpp"

void
Command::SetSystem(SH_System* system)
{
	this->system = system;
}

Command*
CommandFactory::ComposeCommand(string& params)
{
	string CommandName;

	if("Create" == CommandName)		return new CreateCommand;
	else
		throw new SH_Exceptions::NotSupportedException(CommandName);

}






