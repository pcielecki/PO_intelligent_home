/*
 * AdapterDeserializer.hpp
 *
 *  Created on: May 1, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERDESERIALIZER_HPP_

#include "../Deserializer.hpp"

class AdapterDeserializer : public Deserializer{
protected:
	enum{CATEGORY, OWNERID};
};



#endif /* INCL_UTILS_DESERIALIZERS_ADAPTERDESERIALIZERS_ADAPTERDESERIALIZER_HPP_ */
