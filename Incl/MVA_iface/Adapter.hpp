/*
 * Adapter.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef MVA_IFACE_ADAPTER_HPP_
#define MVA_IFACE_ADAPTER_HPP_

#include "iface_defs.hpp"
#include "Model.hpp"
#include "View.hpp"

namespace MVA{

class Adapter{
public:
	virtual void refresh(void) = 0;

protected:
	MVA::View& 		view;
	MVA::Model&		model;

private:
	virtual ~Adapter(void){}
};

};

#endif /* MVA_IFACE_ADAPTER_HPP_ */
