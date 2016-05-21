#define VERBOSITY 4
#if 4 <= VERBOSITY
#include <iostream>
#endif

#include "../../../Incl/Utils/SH_exceptions.hpp"
#include "../../../Incl/globals.hpp"
#include "../../../Incl/Smart_house_iface/Adapter.hpp"
#include "../../../Incl/Smart_house_iface/Model.hpp"
#include "../../../Incl/Smart_house_iface/View.hpp"
#include "../../../Incl/Utils/Deserializers/PairCommandDeserializer.hpp"
#include "../../../Incl/SH_System/Commands/CreateCommand.hpp"
#include "../../../Incl/SH_System/Commands/PairCommand.hpp"


using Smart_house::Adapter;
using Smart_house::Model;
using Smart_house::View;

PairCommand::PairCommand(void)
{
#if 4 <= VERBOSITY
	std::cout << "Obj of PairCommand has been created\n";
#endif
}

string
PairCommand::Execute(string& cmd)
{
	PairCommandDeserializer des;
	string modelID = des.ExtractModelID(cmd);
	string viewID = des.ExtractViewID(cmd);
	string userID = des.ExtractUserID(cmd);


	try{
	Model* m 	= this->system->FindModelByID(modelID);
	View* v  	= this->system->FindViewByID(viewID);

	CreateCommand crtcmd;
	string crtcmdparams = "Adapter " + userID + " " + cmd;

#if 4 <= VERBOSITY
std::cout << "Command re-formed to: " << crtcmdparams << std::endl;
#endif

	(void)crtcmd.Execute(crtcmdparams);

	Adapter* a	= this->system->FindFirstDanglingAdapter(userID);

	a->pair(m ,v);
	}
	catch(SH_Exceptions::StringEmptyException* e)
	{
		systemlog.log(e->getStringName());
	}


#if 4 <= VERBOSITY
std::cout << "Paired Model:" << modelID << "with view: " << viewID << " for user " << userID <<std::endl;
#endif
	return "";
}
