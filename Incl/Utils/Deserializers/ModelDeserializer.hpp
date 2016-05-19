/*
 * ModelDeserializer.hpp
 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELDESERIALIZER_HPP_

#include "Deserializer.hpp"

class ModelDeserializer : public Deserializer{

public:
	string GetCategory(const string& serializedParams);
	string GetID(const string& serializedParams);
	string GetType(const string& serializedParams);
	string GetLibrary(const string& serializedParams);


private:
	enum content_no{CATEGORY, ID, TYPE,  LIBRARY};
	content_no content_id;

	string deserialize(const string& serializedParams);
};


#endif /* INCL_UTILS_DESERIALIZERS_MODELDESERIALIZERS_MODELDESERIALIZER_HPP_ */
