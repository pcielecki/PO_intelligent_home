/*
 * DataTypeDeserializer.cpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#include "../../../../Incl/Utils/Deserializers/DataDeserializers/DataValueDeserializer.hpp"

#include <string>

using std::string;

string
DataValueDeserializer::deserialize(const string& serialized_data)
{
	static int once = 0;

	if(!(once++))	GetContentIndexes(serialized_data, VAL_n);

	string datavalue 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);



	this->ContentBeginningIndex = this->ContentEndIndex + EqualSignOffset;

	this->ContentEndIndex = serialized_data.find(" ", this->ContentBeginningIndex);

	return datavalue;
}

