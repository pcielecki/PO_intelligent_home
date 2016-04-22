/*
 * Model.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef MVA_IFACE_MODEL_HPP_
#define MVA_IFACE_MODEL_HPP_

#include <string>

using std::string;

namespace MVA{

class MVA_Model{
public:
	virtual string getData(void) = 0;

protected:
	virtual ~MVA_Model(void){};
};

};



#endif /* MVA_IFACE_MODEL_HPP_ */
