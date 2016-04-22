
#include "../../Incl/Datas/IntData.hpp"


string
IntData::serializeAndDestroy(void){
	std::ostringstream conv;

		conv << value;
		string out = type + unit + conv.str();

		delete this;

		return out;
}
