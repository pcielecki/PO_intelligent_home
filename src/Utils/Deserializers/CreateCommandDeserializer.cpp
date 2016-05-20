#include "../../../Incl/Utils/Deserializers/CreateCommandDeserializer.hpp"

string
CreateCommandDeserializer::ExtractMVAType(string& serializedData)
{
	this->id = MVA_TYPE;

	return this->ExtractMVAType(serializedData);
}
