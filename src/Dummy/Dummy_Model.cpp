#include "../../../Incl/Dummy/Dummy_Model.hpp"

#include <cstdlib>

string
Dummy_Model::getData(void)
{
	srand(time(NULL));

	int val = rand();

	Smart_house::TempData tdata{val, "K", "Temperature"};

	return tdata.serialize();
}
