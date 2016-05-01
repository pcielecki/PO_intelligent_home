/*
 * ViewIDDeserializer.hpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWIDDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWIDDESERIALIZER_HPP_

#include "ViewDeserializer.hpp"

using std::string;

class ViewIDDeserializer:public ViewDeserializer{
public:
	virtual string deserialize(const string& serializedData);
};


#endif /* INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWIDDESERIALIZER_HPP_ */
