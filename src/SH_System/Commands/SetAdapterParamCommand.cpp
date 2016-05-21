#include "../../../Incl/globals.hpp"
#include "../../../Incl/Utils/SH_exceptions.hpp"
#include "../../../Incl/Smart_house_iface/Adapter.hpp"
#include "../../../Incl/Smart_house_iface/Model.hpp"
#include "../../../Incl/Smart_house_iface/View.hpp"
#include "../../../Incl/Utils/Deserializers/SetParamCommandDeserializer.hpp"
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
	SetParamCommandDeserializer des;

	string userID = des.ExtractUserID(params);
	string M_or_V = des.ExtractMVSelection(params);
	string MV		= des.ExtractMVID(params);

	Smart_house::Adapter* a;

	if("Model" == M_or_V)
		a = this->system->FindAdapterByModel(userID, MV);
	else if ("View" == M_or_V)
		a = this->system->FindAdapterByView(userID, MV);
	else
		throw(new SH_Exceptions::StringEmptyException(M_or_V));

	a->setParam(params);

	return "";
}
