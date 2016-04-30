/*
 * ModelDeserializer.cpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#include "../../../../Incl/Utils/Deserializers/Deserializer.hpp"
#include "../../../../Incl/Utils/Deserializers/ModelDeserializers/ModelIDDeserializer.hpp"

string
ModelIDDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, ID);

	string datatype 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return datatype;
}

