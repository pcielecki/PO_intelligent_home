#define VERBOSITY 4
#if VERBOSITY >= 4
#include <iostream>
#endif

#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Utils/Deserializers/ViewDeserializers/ViewCategoryDeserializer.hpp"
#include "../../Incl/Utils/Deserializers/ViewDeserializers/ViewIDDeserializer.hpp"
#include "../../Incl/Views/Console.hpp"
#include "../../Incl/Smart_house_iface/View.hpp"

using namespace SH_Exceptions;

namespace Smart_house{

View*
View::createView(const string& serializedParams)
{
	ViewCategoryDeserializer catDes;
	string category = catDes.deserialize(serializedParams);


	ViewFactory* vf = ViewFactory::GetViewFactory(category);

	View* view = vf->produceView(serializedParams);

	delete vf;

	ViewFactory::InitializeView(view, serializedParams);

#if VERBOSITY >= 4
	std::cout << 	"\nCreated view:" <<
					"\ncategory = " << category <<
					"\nID =  "<< view->viewID <<
					std::endl;
#endif

	return view;
}

ViewFactory*
ViewFactory::GetViewFactory(const string& viewType)
{
	if("Console" == viewType)
		return new ConsoleFactory;

	else
		throw(new SH_Exceptions::DataTypeNotSupportedException(viewType));
}

void
ViewFactory::InitializeView(View* view, const string& serializedParams)
{
	ViewIDDeserializer idDes;

	view->viewID = idDes.deserialize(serializedParams);
}


}