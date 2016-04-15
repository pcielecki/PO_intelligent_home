/*
 * Model.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_MODEL_HPP_
#define INCL_SMART_HOUSE_IFACE_MODEL_HPP_

#include "../MVA_iface/Model.hpp"

namespace Smart_house{


class Model : public MVA::Model{
public:
	virtual MVA::Data 	getData(void) = 0;

	ID_t 				getModelID(void);
	MVA::MVA_string 	getCategory(void);

private:
	ID_t 				ID;
	MVA::MVA_string 	category;
};

};

#endif /* INCL_SMART_HOUSE_IFACE_MODEL_HPP_ */
