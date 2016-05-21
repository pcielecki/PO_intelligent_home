#include "../../Incl/Utils/ExceptionsSafe.hpp"

ExceptionSafe::ExceptionSafe(void* objptr)
{
	this->objptr = objptr;
}

ExceptionSafe::~ExceptionSafe(void)
{
	delete objptr;
}
