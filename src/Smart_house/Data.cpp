#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Datas/TempData.hpp"
#include "../../Incl/Smart_house_iface/Data.hpp"
#include "../../Incl/Utils/Deserializers/DataDeserializers/DataTypeDeserializer.hpp"

using namespace SH_Exceptions;

Data*
Data::deserializeAndCreate(const string& serialized_data)
{
	DataTypeDeserializer des;
	Data* dt;

	string dataType = des.deserialize(serialized_data);

	DataFactory* dataFactory = DataFactory::GetDataFactory(dataType);

	dt = dataFactory->produceData(serialized_data);

	delete dataFactory;

	return dt;
}

DataFactory*
DataFactory::GetDataFactory(const string& dataType)
{
	if("Temperature" == dataType)
		return new TempDataFactory;

	//else if("Pressure" == dataType)
	//	return new PressureDataFactory;

	else
		throw(new SH_Exceptions::DataTypeNotSupportedException(dataType));

}
