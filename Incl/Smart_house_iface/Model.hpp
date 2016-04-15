/*
 * Model.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_MODEL_HPP_
#define INCL_SMART_HOUSE_IFACE_MODEL_HPP_

#include "MVA_iface/MVA_Model.hpp"

using std::string;

namespace Smart_house{


class Model : public MVA::Model{
public:
	virtual string	getData(void) = 0;

	ID_t 			getModelID(void);
	 string			getCategory(void);


private:
	ID_t 			ID;
	string		 	category;

};

};

#endif /* INCL_SMART_HOUSE_IFACE_MODEL_HPP_ */
