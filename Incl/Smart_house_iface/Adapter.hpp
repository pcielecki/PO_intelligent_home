/*
 * Adapter.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_
#define INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_

#include <vector>
#include "MVA_iface/MVA_Adapter.hpp"
#include "../Utils/Deserializers/String_dict_deserializer.hpp"
#include "Smart_house_defs.hpp"
#include "Adapter_param.hpp"

using std::string;
using namespace Utils;

namespace Smart_house{

class Adapter : public MVA::MVA_Adapter{
public:
	virtual void 				refresh(void) = 0;

	void						setParam(string& param_name, string& param_val);
	string						getParamValue(string& param_name);

	ID_t 						getOwner(void){		return userID;		}
	void						setOwner(ID_t ownerID){this->userID = ownerID;}



protected:
	ID_t 						userID;
	String_dict_deserializer	des;
	std::vector<Adapter_param*>	adapter_param_vector;
	virtual 					~Adapter(void);
};

};


#endif /* INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_ */
