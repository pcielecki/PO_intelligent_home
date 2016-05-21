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
using namespace Smart_house;

class Console : public View{
	string update(string& serialized_params);
};

class ConsoleFactory : public ViewFactory{
	View* produceView(const string& serializedData)
	{
		return new Console;
	}
};

#endif /* INCL_VIEWS_CONSOLE_HPP_ */
