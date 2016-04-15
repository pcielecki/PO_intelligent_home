/*
 * Console.cpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */
#include <iostream>
#include "../../Incl/Dummy/Console.hpp"

using std::cout;

void
Console::update(string& serialized_params) const
{
	cout << serialized_params;
}



