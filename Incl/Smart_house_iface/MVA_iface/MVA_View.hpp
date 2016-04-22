/*
 * View.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef MVA_IFACE_VIEW_HPP_
#define MVA_IFACE_VIEW_HPP_

#include "iface_defs.hpp"

using std::string;

namespace MVA{

class MVA_View{
public:
	virtual void update(string& serialized_params) const = 0;

protected:
	virtual ~MVA_View(void){}
};

};
#endif /* MVA_IFACE_VIEW_HPP_ */
