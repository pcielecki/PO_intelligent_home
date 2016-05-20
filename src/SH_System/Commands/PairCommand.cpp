#include "../../../Incl/Utils/Deserializers/PairCommandDeserializer.hpp"
#include "../../../Incl/SH_System/Commands/PairCommand.hpp"

string
PairCommand::Execute(string& cmd)
{
	PairCommandDeserializer des;
	string modelID = des.ExtractModelID(cmd);
	string adapterID = des.ExtractAdapterID(cmd);
	string viewID = des.ExtractViewID(cmd);

	this->system->FindModelByID(modelID);
	this->system->FindViewByID(viewID);
	this->system->
}
