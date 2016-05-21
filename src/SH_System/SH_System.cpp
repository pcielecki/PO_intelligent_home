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

#if 4 <= VERBOSITY
	std::cout << "Got line: " << line << std::endl;
#endif

	try{	cmddes.CheckForValidityAndFormat(line);		cmd = cf.ComposeCommand(line);				}
	catch(			SH_Exceptions::NotSupportedException* e		)
	{				this->OnCommandNotValid(e);			return;	}
	catch(			SH_Exceptions::StringEmptyException* e		)
	{	std::cout << "bad formatting\n"; }

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

	string exceptionmsg = "Adapter of " + userID + " and view " + ViewID + " not found!\n";
	throw new SH_Exceptions::StringEmptyException(exceptionmsg);
}

Smart_house::Adapter*
SH_System::FindFirstDanglingAdapter(const string& userID)
{
	using Smart_house::Adapter;
	using Smart_house::View;
	using Smart_house::Model;

	vector<Adapter*>::iterator it = this->MyAdapters.begin();

	while(this->MyAdapters.end() != it)
	{
		Adapter* a = *it;
		View* v = (View*)(*it)->getView();
		Model* m = (Model*)(*it)->getModel();

		if(userID == a->getOwner() && NULL == v && NULL == m)
		{
#if 4 <= VERBOSITY
	std::cout << "Found a " << userID << " dangling Adapter" << std::endl;

#endif
	return a;

		}

		++it;
	}



	string exceptionmsg = "No dangling adapters for user " + userID + "\n";
	throw new SH_Exceptions::StringEmptyException(exceptionmsg);
}

Smart_house::Adapter*
SH_System::FindAdapterByModel(const string& userID, const string& ModelID)
{
	using Smart_house::Adapter;
	using Smart_house::Model;

	vector<Adapter*>::iterator it = this->MyAdapters.begin();

	while(this->MyAdapters.end() != it)
	{
		Adapter* a = *it;
		Model* v = (Model*)(*it)->getView();

		if(userID == a->getOwner() && ModelID == v->getModelID())
			return a;

		++it;
	}

	string exceptionmsg = "Adapter of " + userID + " and model " + ModelID + " not found!\n";
	throw new SH_Exceptions::StringEmptyException(exceptionmsg);
}



Smart_house::Model*
SH_System::FindModelByID(const string& modelID)
{
	using Smart_house::Model;

	vector<Model*>::iterator it = this->MyModels.begin();

	while(this->MyModels.end() != it)
	{
		Model* m = *it;
		if(	modelID == m->getModelID()	)
			return m;

		++it;
	}

	string exceptionmsg = "Model of ID: " + modelID + " not found!\n";
	throw new SH_Exceptions::StringEmptyException(exceptionmsg);
}

Smart_house::View*
SH_System::FindViewByID(const string& viewID)
{
	using Smart_house::View;

	vector<View*>::iterator it = this->MyViews.begin();

	while(this->MyViews.end() != it)
	{
		View* v = *it;
		if(viewID ==v->getViewID())
			return v;

		++it;
	}

	string exceptionmsg = "View of ID: " + viewID + " not found!\n";
	throw new SH_Exceptions::StringEmptyException(exceptionmsg);
}
