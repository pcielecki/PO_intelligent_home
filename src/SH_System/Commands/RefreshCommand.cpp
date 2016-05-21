#include "../../../Incl/globals.hpp"

#include "../../../Incl/Smart_house_iface/Adapter.hpp"
#include "../../../Incl/SH_System/SH_System.hpp"
#include "../../../Incl/Utils/Deserializers/RefreshCommandDeserializer.hpp"
#include "../../../Incl/SH_System/Commands/RefreshCommand.hpp"

RefreshCommand::RefreshCommand(void)
{
#if 4 <= VERBOSITY
	std::cout << "Obj of RefreshCommand has been created\n";
#endif
}

string
RefreshCommand::Execute(string& params)
{
	RefreshCommandDeserializer des;
	string UserID = des.ExtractUserID(params);
	string ViewID = des.ExtractViewID(params);

	string OptionalParameters = params;

	SH_System* s = this->system;

	Smart_house::Adapter* a = s->FindAdapterByView(UserID, ViewID);


	return a->refresh(OptionalParameters);

}
