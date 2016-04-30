/*
 * DataTypeDeserializer.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_DATATYPEDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_DATATYPEDESERIALIZER_HPP_

#include <string>
#include "DataDeserializer.hpp"

using std::string;

class DataTypeDeserializer : public DataDeserializer{
public:
	virtual string deserialize(const string& serialized_data);
};


#endif
