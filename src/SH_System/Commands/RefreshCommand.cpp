#include "../../../Incl/Smart_house_iface/Adapter.hpp"
#include "../../../Incl/SH_System/SH_System.hpp"
#include "../../../Incl/SH_System/Commands/RefreshCommand.hpp"

string
RefreshCommand::Execute(string& params)
{
	const string UserID = "";
	const string ViewID = "";
	string OptionalParameters;

	SH_System* system = this->system;

	Smart_house::Adapter* a = system->FindAdapterByView(UserID, ViewID);

	return a->refresh(OptionalParameters);

}
