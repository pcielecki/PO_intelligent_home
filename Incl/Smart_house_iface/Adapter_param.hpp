/*
 * Adapter_param.hpp
 *
 *  Created on: Apr 22, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_ADAPTER_PARAM_HPP_
#define INCL_SMART_HOUSE_IFACE_ADAPTER_PARAM_HPP_

#include <string>
using std::string;

namespace Smart_house{

class Adapter_param{
public:
	string param_name;
	string param_value;


	Adapter_param(void)							{}
	Adapter_param(string name, string value)	{this->param_name = name;	this->param_value = value;}
};

};



#endif /* INCL_SMART_HOUSE_IFACE_ADAPTER_PARAM_HPP_ */
