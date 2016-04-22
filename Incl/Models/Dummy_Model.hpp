/*
 * Dummy_Model.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_DUMMY_MODELS_DUMMY_MODEL_HPP_
#define INCL_DUMMY_MODELS_DUMMY_MODEL_HPP_

#include <string>
#include "../Smart_house_iface/Model.hpp"

using std::string;
using Smart_house::Model;

class Dummy_Model : Smart_house::Model{
public:
	string 	getData(void);
};



#endif /* INCL_DUMMY_MODELS_DUMMY_MODEL_HPP_ */
