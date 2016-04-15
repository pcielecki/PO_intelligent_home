/*
 * Adapter.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_
#define INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_

#include "../../src/Utils/String_dict_deserializer.hpp"
#include "MVA_iface/MVA_Adapter.hpp"

using std::string;
using namespace Utils;

namespace Smart_house{

class Adapter : public MVA::Adapter{
public:
	virtual void 				refresh(void) = 0;

	virtual void				setParam(string& serialized_param) = 0;

	ID_t 						getOwner(void){		return userID;		}



protected:
	ID_t 						userID;
	String_dict_deserializer 	des;
	virtual 					~Adapter(void){}
};

};


#endif /* INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_ */
