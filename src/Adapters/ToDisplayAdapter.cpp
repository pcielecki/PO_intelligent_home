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

	string serialized_data = this->model->getData();

	Data* dt = Data::deserializeAndCreate(serialized_data);

	dt->convert(this->desired_unit);

	serialized_data = dt->serializeAndDestroy();

	this->view->update(	serialized_data	);
}
