/*
 * ViewCategoryDeserializer.hpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWCATEGORYDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWCATEGORYDESERIALIZER_HPP_

#include "ViewDeserializer.hpp"

using std::string;

class ViewCategoryDeserializer : public ViewDeserializer{
public:
	virtual string deserialize(const string& serializedParams);
};



#endif /* INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWCATEGORYDESERIALIZER_HPP_ */
