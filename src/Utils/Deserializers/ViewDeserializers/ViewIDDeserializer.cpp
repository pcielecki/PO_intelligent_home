/*
 * ViewIDDeserializer.cpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */
#include <string>
#include "../../../../Incl/Utils/Deserializers/ViewDeserializers/ViewIDDeserializer.hpp"


string
ViewIDDeserializer::deserialize(const string& serialized_data)
{
	Deserializer::GetContentIndexes(serialized_data, ID);

	string viewid 	= serialized_data.substr(
			this->ContentBeginningIndex,
			this->ContentLength
			);

	return viewid;
}


