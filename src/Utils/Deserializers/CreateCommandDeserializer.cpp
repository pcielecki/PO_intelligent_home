#include "../../../Incl/Utils/Deserializers/CreateCommandDeserializer.hpp"

string
CreateCommandDeserializer::ExtractMVAType(string& serializedData)
{
	this->content_ID = (DefaultContentID)MVA_TYPE;

	return this->ExtractContent(serializedData);
}
