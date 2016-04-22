/*
 * TempData.cpp
 *
 *  Created on: Apr 21, 2016
 *      Author: piotr
 */

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
	if("C" == this->unit)	this->value = ZERO_CELSIUS_TO_KELVINS + this->value;
	else;
}
void
TempData::to_Celsius(void){
	if("K" == this->unit)	this->value = this->value - ZERO_CELSIUS_TO_KELVINS;
}

