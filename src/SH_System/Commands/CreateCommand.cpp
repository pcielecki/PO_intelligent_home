#define VERBOSITY 4

#if 4 <= VERBOSITY
#include <iostream>
#endif

#include "../../../Incl/Smart_house_iface/View.hpp"
#include "../../../Incl/Smart_house_iface/Model.hpp"
#include "../../../Incl/Smart_house_iface/Adapter.hpp"
#include "../../../Incl/SH_System/SH_System.hpp"
#include "../../../Incl/Utils/SH_exceptions.hpp"
#include "../../../Incl/Utils/Deserializers/CreateCommandDeserializer.hpp"
#include "../../../Incl/SH_System/Commands/CreateCommand.hpp"

CreateCommand::CreateCommand(void)
{
#if 4 <= VERBOSITY
	std::cout << "Obj of CreateCommand has been created\n";
#endif
}

string
CreateCommand::Execute(string& params)
{
	CreateCommandDeserializer des;
	SH_System* s = this->system;
	string MVA_element = des.ExtractMVAType(params);

	if("Model" == MVA_element)
		s->GetModels()->push_back(		Smart_house::Model::createModel(params)		);

	else if("View" == MVA_element)
		s->GetViews()->push_back(		Smart_house::View::createView(params)		);

	else if("Adapter" == MVA_element)
		s->GetAdapters()->push_back(	Smart_house::Adapter::createAdapter(params)	);

	else
		throw new SH_Exceptions::NotSupportedException(MVA_element);

	return "";

}
