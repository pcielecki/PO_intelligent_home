#define VERBOSITY 4
#if 4 >= VERBOSITY
#include <iostream>
#endif



#include "../../Incl/SH_System/SH_System.hpp"
#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Utils/Deserializers/CommandDeserializer.hpp"
#include "../../Incl/SH_System/Command.hpp"
#include "../../Incl/SH_System/Commands/CreateCommand.hpp"
#include "../../Incl/SH_System/Commands/SetAdapterParamCommand.hpp"
#include "../../Incl/SH_System/Commands/RefreshCommand.hpp"
#include "../../Incl/SH_System/Commands/RemoveCommand.hpp"



void
Command::SetSystem(SH_System* system)
{
	this->system = system;
}

Command*
CommandFactory::ComposeCommand(string& params)
{
	CommandDeserializer des;
	string CommandName = des.ExtractCommandName(params);

	if("Create" == CommandName)			return new CreateCommand;
	else if("Remove" == CommandName)	return new RemoveCommand;
	else if("Refresh" == CommandName)	return new RefreshCommand;
	else if("SetParam" == CommandName)	return new SetAdapterParamCommand;
	else
		throw new SH_Exceptions::NotSupportedException(CommandName);

}






