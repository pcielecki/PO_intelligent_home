
#include "../Incl/SH_exceptions.hpp"
#include "String_dict_deserializer.hpp"

namespace Utils{

using namespace Smart_house;
using namespace MVA;
using namespace SH_Exceptions;


Adapter_param
String_dict_deserializer::deserialize(MVA_string& serialized_data) const
{
	size_t name_value_separator;
	Adapter_param param;

	name_value_separator = serialized_data.rfind("=");

	param.param_name 	= serialized_data.substr(
			0,
			name_value_separator+1
			);

	param.param_value 	= serialized_data.substr(
			name_value_separator+1,
			serialized_data.length()
			);

	if(		STRING_EMPTY == param.param_name.length()	||
			STRING_EMPTY == param.param_value.length())
		throw StringEmptyException;
	return param;
}


};
