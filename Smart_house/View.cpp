#include "../Incl/Smart_house_iface/View.hpp"

namespace Smart_house{


ID_t
View::getViewID(void){
	return this->viewID;
}



MVA::MVA_string
View::getCategory(void)
{
	return this->category;
}


};
