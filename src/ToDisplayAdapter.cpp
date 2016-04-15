#include "../Incl/ToDisplayAdapter.hpp"

using Smart_house :: Data;

void
ToDisplayAdapter::refresh(void)
{
	string serialized_data = this->model.getData();

	Data* dt = Data::deserializeAndCreate(serialized_data);

	dt->convert(this->desired_unit);

	serialized_data = dt->serializeAndDestroy();

	this->view.update(	serialized_data	);
}
