#include "../Incl/Smart_house_iface/Model.hpp"

namespace Smart_house{

ID_t
Model::getModelID(void)
{
	return this->ID;
}

MVA::MVA_string
Model::getCategory(void)
{
	return this->category;
}

};
