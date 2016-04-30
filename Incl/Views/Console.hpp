/*
 * Dummy_View.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_VIEWS_CONSOLE_HPP_
#define INCL_VIEWS_CONSOLE_HPP_

#include "../../Incl/Smart_house_iface/View.hpp"

using std::string;
using Smart_house :: View;

class Console : public View{
	void update(string& serialized_params) const;
};

#endif /* INCL_VIEWS_CONSOLE_HPP_ */
