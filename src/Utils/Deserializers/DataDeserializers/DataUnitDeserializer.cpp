/*
 * DataTypeDeserializer.cpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */
#include <string>
#include "../../../../Incl/Utils/Deserializers/DataDeserializers/DataUnitDeserializer.hpp"

using std::string;

string
DataUnitDeserializer::deserialize(const string& serialized_data)
{
	GetContentIndexes(serialized_data, UNIT);

	string dataunit 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return dataunit;
}
