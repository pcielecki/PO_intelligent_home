/*
 * ToDisplayAdapter.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_TODISPLAYADAPTER_HPP_
#define INCL_TODISPLAYADAPTER_HPP_

#include <string>
#include "../Smart_house_iface/Adapter.hpp"

using std::string;

class ToDisplayAdapter : Smart_house::Adapter{
public:
	void 				refresh(void);
	void				setParam(string& serialized_param);

private:
	string desired_unit;
};



#endif /* INCL_TODISPLAYADAPTER_HPP_ */
