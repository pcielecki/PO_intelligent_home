#include <string>
#include "../Incl/Smart_house_iface/Adapter.hpp"

namespace Smart_house{

ID_t
Adapter::getOwner(void){
	return this->userID;
}

void
Adapter::setParam(MVA::MVA_string& serialized_param)
{
	this->adapter_param_vector += this->des.deserialize(serialized_param);
}

};
