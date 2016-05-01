/*
 * AdapterCategoryDeserializer.hpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERCATEGORYDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERCATEGORYDESERIALIZER_HPP_

#include "AdapterDeserializer.hpp"

class AdapterCategoryDeserializer : public AdapterDeserializer{
public:
	virtual string deserialize(const string& serializedAdapterParams);
};



#endif /* INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERCATEGORYDESERIALIZER_HPP_ */
