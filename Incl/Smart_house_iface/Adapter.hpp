/*
 * Adapter.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_
#define INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_

#include "../../Utils/String_dict_deserializer.hpp"
#include "../MVA_iface/Adapter.hpp"

using namespace Utils;

namespace Smart_house{

class Adapter : public MVA::Adapter{
public:
	virtual void 				refresh(void) = 0;

	ID_t 						getOwner(void);

	void 						setParam(MVA::MVA_string& serialized_param);

private:
	ID_t 						userID;
	A_param_v 					adapter_param_vector;
	String_dict_deserializer 	des;
	virtual 					~Adapter(void){}
};

};


#endif /* INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_ */
