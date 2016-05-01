#define VERBOSITY 4
#if VERBOSITY == 4
#include <iostream>
using namespace std;
#endif

#include <cstdlib>
#include <string>
#include "../../Incl/Smart_house_iface/Data.hpp"
#include "../../Incl/Utils/Deserializers/String_dict_deserializer.hpp"
#include "../../Incl/Adapters/ToDisplayAdapter.hpp"


void
ToDisplayAdapter::refresh(void)
{
	string str_unit = string("unit");
	this->desired_unit = this->getParamValue(str_unit);

#if VERBOSITY == 4
	cout << "\nOwner " << this->userID << "adapter desired unit is " << this->desired_unit << endl;
#endif

	string serialized_data = this->model->getData();

	Data* dt = Data::deserializeAndCreate(serialized_data);

	dt->convert(this->desired_unit);

#if VERBOSITY == 4
	cout << "Data converted\n";
#endif

	serialized_data = dt->serializeAndDestroy();
#if VERBOSITY == 4
	cout << "\nData serialized to:" << serialized_data << endl;
#endif

	this->view->update(	serialized_data	);
}
