#include "../../../Incl/Utils/Deserializers/PairCommandDeserializer.hpp"

string
PairCommandDeserializer::ExtractModelID(string& cmd)
{
	this->content_ID = (DefaultContentID)ModelID;

	return this->ExtractContent(cmd);
}


string
PairCommandDeserializer::ExtractAdapterID(string& cmd)
{
	this->content_ID = (DefaultContentID)ModelID;

	return this->ExtractContent(cmd);
}


string
PairCommandDeserializer::ExtractViewID(string& cmd)
{
	this->content_ID = (DefaultContentID)ViewID;

	return this->ExtractContent(cmd);
}
