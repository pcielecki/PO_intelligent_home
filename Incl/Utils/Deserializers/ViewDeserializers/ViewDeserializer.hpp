/*
 * ViewDeserializer.hpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWDESERIALIZER_HPP_

#include "../Deserializer.hpp"

class ViewDeserializer : public Deserializer{
protected:
	enum{CATEGORY, ID};
};


#endif /* INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWDESERIALIZER_HPP_ */
