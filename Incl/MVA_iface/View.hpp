/*
 * View.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef MVA_IFACE_VIEW_HPP_
#define MVA_IFACE_VIEW_HPP_

#include "iface_defs.hpp"

namespace MVA{

class View{
public:
	virtual void update(MVA_string& serialized_params) = 0;

private:
	virtual ~View(void){}
};

};
#endif /* MVA_IFACE_VIEW_HPP_ */
