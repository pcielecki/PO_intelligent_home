/*
 * Model.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef MVA_IFACE_MODEL_HPP_
#define MVA_IFACE_MODEL_HPP_

#include "iface_defs.hpp"

namespace MVA{

class Model{
public:
	virtual MVA::Data getData(void) = 0;

private:
	virtual ~Model(void){};
};

};



#endif /* MVA_IFACE_MODEL_HPP_ */
