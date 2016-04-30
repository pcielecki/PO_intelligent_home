#include <cstdio>
#include "../../Incl/Datas/IntData.hpp"


string
IntData::serializeAndDestroy(void){
	char strval[10];

	sprintf(strval, "%d", value);
	string out = type + unit + strval;

	delete this;

	return out;
}
