#include "../../../../Incl/Utils/Deserializers/Deserializer.hpp"
#include "../../../../Incl/Utils/Deserializers/ModelDeserializers/ModelLibDeserializer.hpp"

string
ModelLibDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, LIBRARY);

	string datatype 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentEndIndex
			);

	return datatype;
}

