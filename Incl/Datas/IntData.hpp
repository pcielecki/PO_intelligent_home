/*
 * IntData.hpp
 *
 *  Created on: Apr 21, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_INTDATA_HPP_
#define INCL_SMART_HOUSE_IFACE_INTDATA_HPP_

#include <string>
#include "../Smart_house_iface/Data.hpp"

using std::string;


class IntData : public Data{
public:
	virtual void convert(string desired_unit) = 0;


	string serializeAndDestroy(void);

protected:
	int value;
	string unit;
	string type;
};







#endif /* INCL_SMART_HOUSE_IFACE_INTDATA_HPP_ */
