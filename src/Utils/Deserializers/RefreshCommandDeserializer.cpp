#include "../../../Incl/Utils/Deserializers/RefreshCommandDeserializer.hpp"

string
RefreshCommandDeserializer::ExtractUserID(string& cmd)
{
	this->content_ID = (DefaultContentID)userID;

	return this->ExtractContent(cmd);
}

string
RefreshCommandDeserializer::ExtractViewID(string& cmd)
{
	this->content_ID = (DefaultContentID)userID;

	return this->ExtractContent(cmd);
}
