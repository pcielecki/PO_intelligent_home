/*
 * AdapterDeserializer.hpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERDESERIALIZER_HPP_

#include "Deserializer.hpp"

class AdapterDeserializer : public Deserializer{

public:
	string getOwnerID			(const string& serializedAdapterParams);
	string getAdapterCategory	(const string& serializedAdapterParams);

protected:
	enum adapterParamsNo{CATEGORY, OWNERID};

private:
	adapterParamsNo param_no;
	string deserialize(const string& serializedAdapterParams);
};



#endif /* INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERDESERIALIZER_HPP_ */
