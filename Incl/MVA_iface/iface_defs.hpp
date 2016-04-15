/*
 * iface_defs.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_MVA_IFACE_IFACE_DEFS_HPP_
#define INCL_MVA_IFACE_IFACE_DEFS_HPP_

#include <string>

namespace MVA{

typedef std::string MVA_string;

class Data{
public:
	virtual void convert(Data& data) = 0;

	virtual MVA_string serialize(Data& data) = 0;

private:
	virtual ~Data(void){}
};

};

#endif /* INCL_MVA_IFACE_IFACE_DEFS_HPP_ */
