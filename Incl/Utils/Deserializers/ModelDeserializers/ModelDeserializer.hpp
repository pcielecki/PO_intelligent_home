/*
 * ModelDeserializer.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELDESERIALIZER_HPP_

#include "../Deserializer.hpp"

class ModelDeserializer : public Deserializer{
protected:
	enum{CATEGORY, ID, TYPE,  LIBRARY};
};


#endif /* INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELDESERIALIZER_HPP_ */
