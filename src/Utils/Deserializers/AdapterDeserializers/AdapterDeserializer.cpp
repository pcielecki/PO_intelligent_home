/*
 * AdapterDeserializer.cpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */


#include <string>
#include "../../../../Incl/Utils/Deserializers/AdapterDeserializer.hpp"


string AdapterDeserializer::getOwnerID(const string& serializedAdapterParams)
{
	this->param_no = OWNERID;
	return this->deserialize(serializedAdapterParams);
}


string AdapterDeserializer::getAdapterCategory(const string& serializedAdapterParams)
{
	this->param_no = CATEGORY;
	return this->deserialize(serializedAdapterParams);
}

string
AdapterDeserializer::deserialize(const string& serializedAdapterParams)
{
	Deserializer::GetContentIndexes(serializedAdapterParams, this->param_no);

	string datatype 	= serializedAdapterParams.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return datatype;
}

