#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Datas/TempData.hpp"
#include "../../Incl/Smart_house_iface/Data.hpp"

using namespace SH_Exceptions;

Data*
Data::deserializeAndCreate(const string& serialized_data)
{
	string dataType = DataDeserializer::getDataType(serialized_data);

	if("Temp" == dataType)
	{
		return new TempData();
	}

	throw(new SH_Exceptions::DataTypeNotSupportedException(dataType));
}


string
DataDeserializer::getDataType(const string& serializedData)
{
	int name_value_separator = serializedData.rfind(",");

	return serializedData.substr(
			0,
			name_value_separator-1
			);
}

