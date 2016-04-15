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
typedef std::vector<Adapter_param> A_param_v;

class Adapter_param{
	string param_name;
	string param_value;
};

class Data
{
public:
	virtual void convert(string desired_unit) = 0;
	virtual string serializeAndDestroy(void) noexcept = 0;

	static Data* deserializeAndCreate(string serialized_data) const;

private:
	virtual ~Data(void){}
};

class IntData : Data{
public:
	IntData(int val, string unit, string type){
		this->value = val;	this->unit = unit; this-> type = type;
	}

	virtual void convert(string desired_unit) = 0;

	string serializeAndDestroy(void) noexcept{
		std::ostringstream conv;

		conv << value;
		string out = type + unit + conv.str();

		delete this;

		return out;
	}

private:
	int value;
	string unit;
	string type;

	virtual ~IntData(void){}
};

class TempData : IntData{
public:

	void convert(string desired_unit){
		switch(	desired_unit	)
		{
		case "K":
			to_Kelvins();
			break;

		case "C":
			to_Celsius();
			break;

		default:
			break;
		}

	}


private:

	string type = "Temperature";

	void to_Kelvins(void){
		if("C" == this->unit)	this->value = 273 + this->value;
		else;
	}
	void to_Celsius(void){
		if("K" == this->unit)	this->value = this->value - 273;
	}
};

static Data*
Data::deserializeAndCreate(string serialized_data) const{
	string type;

	switch(type){
	case "Temperature":
		return new TempData();
		break;
	}
}



};



#endif /* INCL_SMART_HOUSE_IFACE_SMART_HOUSE_DEFS_HPP_ */
