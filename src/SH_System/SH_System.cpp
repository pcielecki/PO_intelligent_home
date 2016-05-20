#define VERBOSITY 4

#if 4 <= VERBOSITY
#include <iostream>
#endif

#include <iterator>
#include <string>
#include "../../Incl/globals.hpp"
#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Smart_house_iface/Adapter.hpp"
#include "../../Incl/Smart_house_iface/Model.hpp"
#include "../../Incl/Smart_house_iface/View.hpp"
#include "../../Incl/Utils/Deserializers/CommandDeserializer.hpp"
#include "../../Incl/SH_System/Command.hpp"
#include "../../Incl/SH_System/SH_System.hpp"

void
SH_System::ProcessLine(string& line)
{
	CommandDeserializer cmddes;
	CommandFactory cf;
	Command* cmd;

	cmddes.CheckForValidityAndFormat(line);

	try{			cmd = cf.ComposeCommand(line);				}
	catch(			SH_Exceptions::NotSupportedException* e		)
	{				this->OnCommandNotValid(e);			return;	}

	cmd->SetSystem(this);
	cmd->Execute(line);
}

void
SH_System::OnCommandNotValid(SH_Exceptions::NotSupportedException* e)
{
	string msg = "Invalid command: " + e->getName();
	systemlog.log(msg);

	delete e;
}


Smart_house::Adapter*
SH_System::FindAdapterByView(const string& userID, const string& ViewID)
{
	using Smart_house::Adapter;
	using Smart_house::View;

	vector<Adapter*>::iterator it = this->MyAdapters.begin();

	while(this->MyAdapters.end() != it)
	{
		Adapter* a = *it;
		View* v = (View*)(*it)->getView();

		if(userID == a->getOwner() && ViewID == v->getViewID())
			return a;

		++it;
	}

#if 4 <= VERBOSITY
	std::cout << "Found a " << userID << "Adapter of viewID = " << ViewID << std::endl;
#endif

	string exceptionmsg = "Adapter of " + userID + " and view " + ViewID + "not found!\n";
	throw new SH_Exceptions::StringEmptyException(exceptionmsg);
}

Smart_house::Adapter*
SH_System::FindAdapterByModel(const string& userID, const string& ViewID)
{
	using Smart_house::Adapter;
	using Smart_house::View;

	vector<Adapter*>::iterator it = this->MyAdapters.begin();

	while(this->MyAdapters.end() != it)
	{
		Adapter* a = *it;
		View* v = (View*)(*it)->getView();

		if(userID == a->getOwner() && ViewID == v->getViewID())
			return a;

		++it;
	}

	string exceptionmsg = "Adapter of " + userID + " and view " + ViewID + "not found!\n";
	throw new SH_Exceptions::StringEmptyException(exceptionmsg);
}

