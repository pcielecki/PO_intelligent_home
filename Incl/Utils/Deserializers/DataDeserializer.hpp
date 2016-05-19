/*
 * Datadeserializer.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATADESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATADESERIALIZER_HPP_



#include <string>
#include "Deserializer.hpp"

using std::string;

class DataDeserializer : public Deserializer{

public:
	string GetDataType(const string& serialized_data);
	string GetDataUnit(const string& serialized_data);
	string GetDataValues(const string& serialized_data);

private:
	string deserialize(const string& serialized_data);

	enum SerializedDataContents{DATATYPE, UNIT, VAL_n};
	SerializedDataContents current_content;
};


#endif /* INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATADESERIALIZER_HPP_ */
