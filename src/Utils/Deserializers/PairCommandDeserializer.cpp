#include "../../../Incl/Utils/Deserializers/PairCommandDeserializer.hpp"

string
PairCommandDeserializer::ExtractModelID(string& cmd)
{
	this->content_ID = (DefaultContentID)ViewID;

	return this->ExtractContent(cmd);
}


string
PairCommandDeserializer::ExtractUserID(string& cmd)
{
	this->content_ID = (DefaultContentID)ViewID;

	return this->ExtractContent(cmd);
}


string
PairCommandDeserializer::ExtractViewID(string& cmd)
{
	this->content_ID = (DefaultContentID)ViewID;

	return this->ExtractContent(cmd);
}
