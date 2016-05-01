#include <cstdio>
#include "../../Incl/Datas/IntData.hpp"


string
IntData::serializeAndDestroy(void){
	char strval[10];
	char space[2];

	sprintf(space, " ");
	sprintf(strval, "%d", value);
	string out = type + space + unit + space + strval;

	delete this;

	return out;
}
