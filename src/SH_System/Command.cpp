#include "../../Incl/SH_System/SH_System.hpp"
#include "../../Incl/SH_System/Commands/CreateCommand.hpp"
#include "../../Incl/SH_System/Command.hpp"


Command*
CommandFactory::ComposeCommand(string& params)
{
	string CommandName;

	try		{
		this->CheckForValidity(params);
	}
	catch(...){

	}


	if("Create" == CommandName)
	{
		return new CreateCommand;
	}
	else
		throw 0;

}

void
CommandFactory::CheckForValidity(const string& commandstring)
{
	throw "NOT implemented";
}


