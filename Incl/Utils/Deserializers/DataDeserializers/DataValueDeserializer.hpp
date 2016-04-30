/*
 * DataValueDeserializser.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATAVALUEDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATAVALUEDESERIALIZER_HPP_

#include <string>
#include "DataDeserializer.hpp"

using std::string;

class DataValueDeserializer : public DataDeserializer{
public:
	virtual string deserialize(const string& serialized_data);
};




#endif /* INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATAVALUEDESERIALIZER_HPP_ */
