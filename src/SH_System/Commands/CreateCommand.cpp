#include "../../../Incl/SH_System/SH_System.hpp"
#include "../../../Incl/SH_System/Commands/CreateCommand.hpp"

string
CreateCommand::Execute(string& params)
{
	string MVA_element = this->ExtractType(params);

	if("Model" == MVA_element)
		this->system->CreateModel(params);

	else if("View" == MVA_element)
		this->system->CreateView(params);

	else if("Adapter" == MVA_element)
		this->system->CreateAdapter(params);

	else
		throw 0;

	return "";
}

string CreateCommand::ExtractType(string& params)
{
	return params;
}
