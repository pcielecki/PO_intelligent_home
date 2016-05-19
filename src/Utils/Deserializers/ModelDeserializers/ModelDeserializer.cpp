/*
 * ModelDeserializer.cpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#include <string>
#include "../../../../Incl/Utils/Deserializers/ModelDeserializer.hpp"

string ModelDeserializer::GetCategory(const string& serializedParams)
{
	this->content_id = CATEGORY;
	return this->deserialize(serializedParams);
}

string ModelDeserializer::GetID(const string& serializedParams)
{
	this->content_id = ID;
	return this->deserialize(serializedParams);
}

string ModelDeserializer::GetType(const string& serializedParams)
{
	this->content_id = TYPE;
	return this->deserialize(serializedParams);
}

string ModelDeserializer::GetLibrary(const string& serializedParams)
{
	this->content_id = LIBRARY;
	return this->deserialize(serializedParams);
}


string
ModelDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, this->content_id);

	string datatype 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return datatype;
}


