/*
 * Smart_house_defs.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_SMART_HOUSE_DEFS_HPP_
#define INCL_SMART_HOUSE_IFACE_SMART_HOUSE_DEFS_HPP_

#include <vector>
#include "../MVA_iface/iface_defs.hpp"

namespace Smart_house{

typedef unsigned int ID_t;
typedef char Smart_house_char;
typedef std::vector<Adapter_param> A_param_v;

class Adapter_param{
	MVA::MVA_string param_name;
	MVA::MVA_string param_value;
};

};



#endif /* INCL_SMART_HOUSE_IFACE_SMART_HOUSE_DEFS_HPP_ */
