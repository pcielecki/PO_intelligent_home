#include "../../../Incl/Utils/Deserializers/SetParamCommandDeserializer.hpp"

string
SetParamCommandDeserializer::ExtractUserID(string& cmd)
{
	this->content_ID = (DefaultContentID)USERID;

	return this->ExtractContent(cmd);
}

string
SetParamCommandDeserializer::ExtractMVSelection(string& cmd)
{
	this->content_ID = (DefaultContentID)USERID;

	return this->ExtractContent(cmd);
}
string
SetParamCommandDeserializer::ExtractMVID(string& cmd)
{
	this->content_ID = (DefaultContentID)USERID;

	return this->ExtractContent(cmd);
}
