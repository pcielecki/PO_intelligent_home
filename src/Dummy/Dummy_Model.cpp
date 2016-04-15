#include "../../Incl/Dummy/Dummy_Model.hpp"

#include <cstdlib>

using Smart_house::TempData;

string
Dummy_Model::getData(void)
{

	srand(time(NULL));

	int val = rand();

	Smart_house::Data* tdata = new TempData();

	return tdata.serializeAndDestroy();
}
