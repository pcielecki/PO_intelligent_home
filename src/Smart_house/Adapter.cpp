#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Smart_house_iface/Adapter.hpp"

using std::string;

namespace Smart_house{

void
Adapter::setParam(string& param_name, string& param_val)
{
	this->adapter_param_vector.push_back(
			new Adapter_param(param_name, param_val)
	);
}

string
Adapter::getParamValue(string& param_name)
{
	Adapter_param* vector_element;
	vector_element = this->adapter_param_vector.front();

	while(vector_element != this->adapter_param_vector.back())
	{
		if(param_name == vector_element->param_name)
		{
			return vector_element->param_value;
		}
		++vector_element;
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

};
