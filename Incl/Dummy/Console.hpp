/*
 * Dummy_View.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_DUMMY_CONSOLE_HPP_
#define INCL_DUMMY_CONSOLE_HPP_

#include "../Smart_house_iface/View.hpp"

using std::string;
using Smart_house :: View;

class Console : public View{
	void update(string& serialized_params) const;
};

#endif /* INCL_DUMMY_CONSOLE_HPP_ */
