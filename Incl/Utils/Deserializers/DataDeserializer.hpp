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

protected:
	enum SerializedDataContents{DATATYPE, UNIT, VAL_n};
};


#endif /* INCL_UTILS_DESERIALIZERS_DATADESERIALIZERS_DATADESERIALIZER_HPP_ */
