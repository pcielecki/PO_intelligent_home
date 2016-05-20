#define VERBOSITY 4
#include "../../../Incl/SH_System/Commands/SetAdapterParamCommand.hpp"

using std::string;

SetAdapterParamCommand::SetAdapterParamCommand(void)
{
#if 4 <= VERBOSITY
	std::cout << "Obj of SetAdapterParamCommand has been created\n";
#endif
}

string
SetAdapterParamCommand::Execute(string& params)
{
	throw "NOT implemented!";
}
