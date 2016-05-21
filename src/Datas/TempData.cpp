#include "../../Incl/globals.hpp"
#if VERBOSITY == 4
#include <iostream>
using std:: cout;
using std::endl;
#endif


#include <cstdlib>
#include "../../Incl/Utils/Deserializers/DataDeserializer.hpp"
#include "../../Incl/Datas/TempData.hpp"


void
TempData::convert(std::string desired_unit){
	if("K" == desired_unit)
		to_Kelvins();
	else if("C" == desired_unit)
		to_Celsius();
}

void
TempData::to_Kelvins(void){
	if("C" == this->unit)
	{
		this->value = ZERO_CELSIUS_TO_KELVINS + this->value;
		this->unit = string("K");
	}
	else;
}
void
TempData::to_Celsius(void){
	if("K" == this->unit)
	{
		this->value = this->value - ZERO_CELSIUS_TO_KELVINS;
		this->unit = string("C");
	}
}






Data*
TempDataFactory::produceData(const string& serializedData)
{
	TempData* data = new TempData();
	DataDeserializer DDeserializer;

	data->type = 	DDeserializer.GetDataType(serializedData);

	data->unit = 	DDeserializer.GetDataUnit(serializedData);

	data->value =	atoi(
			DDeserializer.GetDataValues(serializedData)
			.c_str());

#if VERBOSITY == 4
	cout << "\nProduced data:\n" << "Type = " << data->type << "\nUnit = " << data->unit << "\nValue = "
			<< data->value << endl;
#endif

	return data;
}
