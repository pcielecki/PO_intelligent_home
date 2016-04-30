/*
 * ModelCategoryDeserializer.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELLIBDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELLIBDESERIALIZER_HPP_

#include <string>
#include "ModelDeserializer.hpp"

using std::string;

class ModelLibDeserializer : public ModelDeserializer{
public:
	virtual string deserialize(const string& serialized_data);
};





#endif /* INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELCATEGORYDESERIALIZER_HPP_ */
