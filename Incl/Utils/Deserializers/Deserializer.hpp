/*
 * Deserializer.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_DESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_DESERIALIZER_HPP_

#include <string>

using std::string;

class Deserializer{
public:

 	virtual std::string deserialize(const std::string& serialized_data) = 0;

 	virtual ~Deserializer(){}

 	void GetContentIndexes(const std::string& serialized_data, int content_name);

protected:
 	unsigned int ContentIterator;
 	int ContentBeginningIndex, ContentEndIndex;

 	static const size_t EqualSignOffset = 1;
};


#endif /* INCL_UTILS_DESERIALIZERS_DESERIALIZER_HPP_ */
