
#include "../../../Incl/SH_System/Commands/RemoveCommand.hpp"

using std::string;

RemoveCommand::RemoveCommand(void)
{
#if 4 <= VERBOSITY
	std::cout << "Obj of RemoveCommand has been created\n";
#endif
}


string
RemoveCommand::Execute(string& params)
{
	throw "Not implemented";
}
