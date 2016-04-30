/*
 * DataTypeDeserializer.cpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */
#include "../../../../Incl/Utils/Deserializers/Deserializer.hpp"
#include "../../../../Incl/Utils/Deserializers/DataDeserializers/DataTypeDeserializer.hpp"

using std::string;

string
DataTypeDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, DATATYPE);

	string datatype 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return datatype;
}

