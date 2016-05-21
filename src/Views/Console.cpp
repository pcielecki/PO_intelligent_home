#include "../../Incl/globals.hpp"

#include "../../Incl/Views/Console.hpp"

#include <iostream>

using std::cout; using std:: endl;

string
Console::update(string& serialized_params)
{

string encapsulated = "serial 9600 8 N 1 | " + serialized_params;

#if VERBOSITY == 4
	cout << "View " << this->viewID << " received: " << serialized_params << endl
			<< "View " << this->viewID << " returned: " << encapsulated << endl;
#endif

	return encapsulated;
}



