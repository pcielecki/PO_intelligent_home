/*
 * ModelDeserializer.cpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */
#include "../../../../Incl/Utils/Deserializers/Deserializer.hpp"
#include "../../../../Incl/Utils/Deserializers/ModelDeserializers/ModelCategoryDeserializer.hpp"
#include <iostream>

string
ModelCategoryDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, CATEGORY);

	string datatype 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentEndIndex
			);



	return datatype;
}

