#define VERBOSITY 4

#include "../../Incl/Views/Console.hpp"

#include <iostream>

using std::cout; using std:: endl;

void
Console::update(string& serialized_params) const
{
#if VERBOSITY == 4
	cout << "View received: " << serialized_params << endl;
#endif

	cout << serialized_params;
}



