/*
 * Smart_house_defs.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_SMART_HOUSE_DEFS_HPP_
#define INCL_SMART_HOUSE_IFACE_SMART_HOUSE_DEFS_HPP_

#include <vector>
#include <sstream>
#include "MVA_iface/iface_defs.hpp"

using std::string;
using namespace MVA;

namespace Smart_house{

typedef unsigned int ID_t;
typedef char Smart_house_char;


class Adapter_param{
public:
	string param_name;
	string param_value;
};

class Data
{
public:
	virtual void convert(string desired_unit) = 0;
	virtual string serializeAndDestroy(void) = 0;

	static Data* deserializeAndCreate(const string& serialized_data);

protected:
	virtual ~Data(void){}
};

class IntData : public Data{
public:
	virtual void convert(string desired_unit) = 0;

	string serializeAndDestroy(void){
		std::ostringstream conv;

		conv << value;
		string out = type + unit + conv.str();

		delete this;

		return out;
	}

protected:
	int value;
	string unit;
	string type;

	virtual ~IntData(void){}
};

class TempData : public IntData{
public:
	void convert(string desired_unit){
		if("K" == desired_unit)
			to_Kelvins();
		else if("C" == desired_unit)
			to_Celsius();
	}


private:
	void to_Kelvins(void){
		if("C" == this->unit)	this->value = 273 + this->value;
		else;
	}
	void to_Celsius(void){
		if("K" == this->unit)	this->value = this->value - 273;
	}
};

Data*
Data::deserializeAndCreate(const string& serialized_data){
	string type;

	if("Temperature" == type)
		return new TempData();
}



};



#endif /* INCL_SMART_HOUSE_IFACE_SMART_HOUSE_DEFS_HPP_ */
