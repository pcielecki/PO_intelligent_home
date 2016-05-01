#include <string>
#include "../../../../Incl/Utils/Deserializers/AdapterDeserializers/AdapterOwnerIDDeserializer.hpp"

string
AdapterOwnerIDDeserializer::deserialize(const string& serializedAdapterParams)
{
	Deserializer::GetContentIndexes(serializedAdapterParams, OWNERID);

	string datatype 	= serializedAdapterParams.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return datatype;
}

