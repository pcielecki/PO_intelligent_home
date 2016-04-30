/*
 * Datadeserializer.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATADESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATADESERIALIZER_HPP_



#include <string>
#include "../Deserializer.hpp"

using std::string;

class DataDeserializer : public Deserializer{
public:

/* 	virtual std::string deserialize(const std::string& serialized_data) = 0;

 	virtual ~DataDeserializer(){}

 	void GetContentIndexes(const std::string& serialized_data, SerializedDataContents content_name);*/

protected:
	enum SerializedDataContents{DATATYPE, UNIT, VAL_n};
 /*	unsigned int ContentIterator;
 	int ContentBeginningIndex, ContentEndIndex;

 	static const size_t EqualSignOffset = 1;*/
};


#endif /* INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATADESERIALIZER_HPP_ */
