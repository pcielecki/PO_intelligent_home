
#include "../../Incl/Models/Dummy_Model.hpp"
#include "../../Incl/Datas/TempData.hpp"
#include <cstdlib>



string
Dummy_Model::getData(void)
{

	srand(time(NULL));

	int val = rand();

	Data* tdata = new TempData(val);

	return tdata->serializeAndDestroy();
}
