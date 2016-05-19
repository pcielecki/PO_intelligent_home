/*
 * ViewDeserializer.hpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWDESERIALIZER_HPP_

#include "Deserializer.hpp"

class ViewDeserializer : public Deserializer{

public:
	string getCategory(const string& serialized_params);
	string getViewID(const string& serialized_params);


private:
	enum param_no{CATEGORY, ID};
	param_no param_id;
	string deserialize(const string& serializedParams);
};


#endif /* INCL_UTILS_DESERIALIZERS_VIEWDESERIALIZERS_VIEWDESERIALIZER_HPP_ */
