#include "../../../Incl/SH_System/SH_System.hpp"
#include "../../../Incl/SH_System/Commands/CreateCommand.hpp"

void
CreateCommand::SetSystem(SH_System* system)
{
	this->system = system;
}

string
CreateCommand::Execute(string& params)
{
	string MVA_element = this->ExtractType(params);

		throw 0;

	return "";
}

string CreateCommand::ExtractType(string& params)
{
	return params;
}
