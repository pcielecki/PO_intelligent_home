/*
 * Model.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef MVA_IFACE_MODEL_HPP_
#define MVA_IFACE_MODEL_HPP_

#include "iface_defs.hpp"

using std::string;

namespace MVA{

class Model{
public:
	virtual string getData(void) = 0;

private:
	virtual ~Model(void){};
};

};



#endif /* MVA_IFACE_MODEL_HPP_ */
