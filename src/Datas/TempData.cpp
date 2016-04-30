/*
 * TempData.cpp
 *
 *  Created on: Apr 21, 2016
 *      Author: piotr
 */
#include "../../Incl/Utils/Deserializers/DataDeserializers/DataTypeDeserializer.hpp"
#include "../../Incl/Utils/Deserializers/DataDeserializers/DataUnitDeserializer.hpp"
#include "../../Incl/Utils/Deserializers/DataDeserializers/DataValueDeserializer.hpp"
#include "../../Incl/Datas/TempData.hpp"

#include <cstdlib>

void
TempData::convert(std::string desired_unit){
	if("K" == desired_unit)
		to_Kelvins();
	else if("C" == desired_unit)
		to_Celsius();
}

void
TempData::to_Kelvins(void){
	if("C" == this->unit)	this->value = ZERO_CELSIUS_TO_KELVINS + this->value;
	else;
}
void
TempData::to_Celsius(void){
	if("K" == this->unit)	this->value = this->value - ZERO_CELSIUS_TO_KELVINS;
}






Data*
TempDataFactory::produceData(const string& serializedData)
{
	TempData* data = new TempData();
	DataTypeDeserializer TypeDeserializer;
	DataUnitDeserializer UnitDeserializer;
	DataValueDeserializer ValueDeserializer;

	data->type = 	TypeDeserializer.deserialize(serializedData);

	data->unit = 	UnitDeserializer.deserialize(serializedData);

	data->value =	atoi(
			ValueDeserializer.deserialize(serializedData)
			.c_str());

	return data;
}
