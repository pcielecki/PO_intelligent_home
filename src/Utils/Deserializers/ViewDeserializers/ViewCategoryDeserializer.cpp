/*
 * ViewCategoryDeserializer.cpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */

#include <string>
#include "../../../../Incl/Utils/Deserializers/ViewDeserializers/ViewCategoryDeserializer.hpp"


string
ViewCategoryDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, CATEGORY);

	string viewcat 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return viewcat;
}


