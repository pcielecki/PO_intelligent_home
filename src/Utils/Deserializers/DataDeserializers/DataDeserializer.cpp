/*
 * DataTypeDeserializer.cpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */
/*#include "../../../../Incl/Utils/SH_exceptions.hpp"

using std::string;
using SH_Exceptions::StringEmptyException;

void
DataDeserializer::GetContentIndexes(const std::string& serialized_data, SerializedDataContents content_name)
{
	this->ContentBeginningIndex = 0;

	while((unsigned int)content_name >= this->ContentIterator)
	{
		ContentBeginningIndex =
				serialized_data.find(" ", ContentBeginningIndex + 1) + EqualSignOffset;

		++this->ContentIterator;
	}

	if(-1 == this->ContentBeginningIndex)
	{
		throw(new StringEmptyException());
	}

	this->ContentEndIndex =
			serialized_data.find(" ", ContentBeginningIndex) - EqualSignOffset;

	if(-1 == this->ContentEndIndex)
		this->ContentEndIndex = serialized_data.size()-1;
}
*/

