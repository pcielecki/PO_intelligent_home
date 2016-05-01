/*
 * ModelDeserializer.cpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */
#include <string>
#include "../../../../Incl/Utils/Deserializers/ModelDeserializers/ModelCategoryDeserializer.hpp"


string
ModelCategoryDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, CATEGORY);

	string datatype 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);



	return datatype;
}

