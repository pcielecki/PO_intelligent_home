/*
 * ViewDeserializer.cpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */


#include <string>
#include "../../../Incl/Utils/Deserializers/ViewDeserializer.hpp"


string
ViewDeserializer::getCategory(const string& serialized_params)
{
	this->param_id = CATEGORY;
	return this->deserialize(serialized_params);
}

string
ViewDeserializer::getViewID(const string& serialized_params)
{
	this->param_id = ID;
	return this->deserialize(serialized_params);
}

string
ViewDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, this->param_id);

	string viewcat 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return viewcat;
}

