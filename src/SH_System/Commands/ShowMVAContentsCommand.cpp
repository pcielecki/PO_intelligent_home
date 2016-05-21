#include "../../../Incl/globals.hpp"
#include <iostream>
#include "../../../Incl/SH_System/SH_System.hpp"
#include "../../../Incl/SH_System/Commands/ShowMVAContentsCommand.hpp"

using std::cout;
using std::endl;
using std::string;

ShowMVAContentsCommand::ShowMVAContentsCommand()
{
#if 4 <= VERBOSITY
	std::cout << "Created instance of ShowMVAContentsCommand\n";
#endif
}

string
ShowMVAContentsCommand::Execute(string& cmd)
{
	SH_System* s = this->system;


	vector<Smart_house::Model*>::iterator itm = s->GetModels()->begin();
	cout << "Models:\n";
	while(itm !=s->GetModels()->end() )
	{
		cout << (*itm)->getModelID() << "\t" << (*itm)->getCategory() << endl;
		++itm;
	}

	vector<Smart_house::View*>:: iterator itv = s->GetViews()->begin();
	cout << "Views:\n";
	while(itv != s->GetViews()->end() )
	{
		cout << (*itv)->getViewID() << "\t" << endl;
		++itv;
	}

	vector<Smart_house::Adapter*>::iterator ita = s->GetAdapters()->begin();
	cout << "Adapters:\n";
	while(ita != s->GetAdapters()->end())
	{
		Smart_house::Model* m= (Smart_house::Model*)(*ita)->getModel();
		Smart_house::View* v = (Smart_house::View*)(*ita)->getView();

		cout << (*ita)->getOwner() << "\t" << m->getModelID() << "\t" << v->getViewID() << endl;
		++ita;
	}

	return "";
}
