/*
 * String_dict_deserializer.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef UTILS_STRING_DICT_DESERIALIZER_HPP_
#define UTILS_STRING_DICT_DESERIALIZER_HPP_

#include "../../Incl/Smart_house_iface/Smart_house_defs.hpp"

using std::string;

namespace Utils{

class String_dict_deserializer{
public:
	Smart_house::Adapter_param deserialize(string& serialized_data) const;

private:
	static const unsigned int STRING_EMPTY = 0;
};

}



#endif /* UTILS_STRING_DICT_DESERIALIZER_HPP_ */
