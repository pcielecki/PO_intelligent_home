#include <string>
#include "../../../../Incl/Utils/Deserializers/AdapterDeserializers/AdapterCategoryDeserializer.hpp"


string
AdapterCategoryDeserializer::deserialize(const string& serializedAdapterParams)
{
	Deserializer::GetContentIndexes(serializedAdapterParams, CATEGORY);

	string datatype 	= serializedAdapterParams.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return datatype;
}
