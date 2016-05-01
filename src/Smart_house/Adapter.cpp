#define VERBOSITY 4
#if VERBOSITY >= 4
#include <iostream>
#endif
#include <iterator>
#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Utils/Deserializers/AdapterDeserializers/AdapterCategoryDeserializer.hpp"
#include "../../Incl/Utils/Deserializers/AdapterDeserializers/AdapterOwnerIDDeserializer.hpp"
#include "../../Incl/Adapters/ToDisplayAdapter.hpp"
#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Smart_house_iface/Adapter.hpp"

using namespace std;
using std::string;
using namespace SH_Exceptions;

namespace Smart_house{

void
Adapter::setParam(const string& SerializedParam)
{
	String_dict_deserializer des;
	Adapter_param* ap = new Adapter_param(des.deserialize(SerializedParam));

	this->adapter_param_vector.push_back(ap);

#if VERBOSITY == 4
	std::cout << "Adapter of OwnerID = " << this->userID
		<< ": setParam" << std::endl << 	this->adapter_param_vector.back()->param_name
		<<" = " << this->adapter_param_vector.back()->param_value  << std::endl;
#endif
}

string
Adapter::getParamValue(string& param_name)
{
	vector<Adapter_param*>::iterator it = this->adapter_param_vector.begin();

	while(it != this->adapter_param_vector.end())
	{
		if(param_name == (*it)->param_name)
		{
			return (*it)->param_value;
		}
		++it;
	}

	throw(new SH_Exceptions::StringEmptyException(param_name));
}

Adapter::~Adapter(void)
{
	Adapter_param* vector_element = this->adapter_param_vector.front();

	while(vector_element != this->adapter_param_vector.back())
	{
		delete vector_element;
		vector_element++;
	}
}

Adapter*
Adapter::createAdapter(const string& serializedParams)
{
	AdapterCategoryDeserializer catDes;
	string category = catDes.deserialize(serializedParams);

	AdapterFactory* af = AdapterFactory::GetAdapterFactory(category);

	Adapter* adapter = af->produceAdapter(serializedParams);

	delete af;

	AdapterFactory::InitializeAdapter(adapter, serializedParams);

#if VERBOSITY >= 4
	std::cout << 	"\nCreated adapter:" <<
					"\ncategory = " << category <<
					"\nOwnerID =  "<< adapter->userID <<
					std::endl;
#endif

	return adapter;
}


void
Adapter::pair(Model* m, View* v)
{
	this->model = m; this->view = v;
}

AdapterFactory*
AdapterFactory::GetAdapterFactory(const string& adapterType)
{
	if("ToDisplay" == adapterType)
		return new ToDisplayAdapterFactory;

	else
		throw(new SH_Exceptions::DataTypeNotSupportedException(adapterType));
}

void
AdapterFactory::InitializeAdapter(Adapter* adapter, const string& serializedParams)
{
	AdapterOwnerIDDeserializer idDes;

	adapter->userID = idDes.deserialize(serializedParams);
}





};
