#include "../../../Incl/Utils/SH_exceptions.hpp"
#include "../../../Incl/Utils/Deserializers/Deserializer.hpp"

using std::string;
using SH_Exceptions::StringEmptyException;

void
Deserializer::GetContentIndexes(const std::string& serialized_data, int content_name)
{
	this->ContentBeginningIndex = this->ContentIterator = 0;

	while((unsigned int)content_name > this->ContentIterator)
	{
		ContentBeginningIndex =
				serialized_data.find(" ", ContentBeginningIndex) + 1;

		++this->ContentIterator;
	}

	if(-1 == this->ContentBeginningIndex)	throw(new StringEmptyException());

	this->ContentEndIndex =
			serialized_data.find(" ", ContentBeginningIndex) - 1;

	if(-1 == this->ContentEndIndex)
		this->ContentEndIndex = serialized_data.size();

	this->ContentLength = this->ContentEndIndex - this->ContentBeginningIndex + 1;
}
