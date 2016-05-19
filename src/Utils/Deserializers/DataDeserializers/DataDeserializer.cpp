#include <string>
#include "../../../../Incl/Utils/Deserializers/DataDeserializer.hpp"

using std::string;

string DataDeserializer::GetDataType(const string& serialized_data)
{
	this->current_content = DATATYPE;
	return this->deserialize(serialized_data);
}

string DataDeserializer::GetDataUnit(const string& serialized_data)
{
	this->current_content = UNIT;
	return this->deserialize(serialized_data);
}

string DataDeserializer::GetDataValues(const string& serialized_data)
{
	this->current_content = VAL_n;
	return this->deserialize(serialized_data);
}



string
DataDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, this->current_content);

	string datatype 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return datatype;
}

