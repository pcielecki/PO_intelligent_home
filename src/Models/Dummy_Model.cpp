#define VERBOSITY 4
#if VERBOSITY == 4
#include <iostream>
using namespace std;
#endif

#include <cstdlib>
#include <cstdio>
#include <string>
#include "../../Incl/Models/Dummy_Model.hpp"
#include "../../Incl/Smart_house_iface/Data.hpp"




string
Dummy_Model::getData(void)
{
	char strval[20];
	srand(time(NULL));
	int val = rand() & 35;

	sprintf(strval, "%d", val);

	string serialized_data = string("Temperature ") + string("C ") + strval;

#if VERBOSITY == 4
	cout << "\nModel " << this->ID << " returned: " << serialized_data << endl;
#endif

	return serialized_data;
}

