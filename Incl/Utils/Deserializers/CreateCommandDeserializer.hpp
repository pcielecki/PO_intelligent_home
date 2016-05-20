/*
 * CreateCommandDeserializer.hpp
 *
 *  Created on: May 20, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_CREATECOMMANDDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_CREATECOMMANDDESERIALIZER_HPP_

#include "CommandDeserializer.hpp"

using std::string;

class CreateCommandDeserializer : public CommandDeserializer{
public:
	string ExtractMVAType(string& serializedData);

private:
	enum CreateCommandContentID {MVA_TYPE};
	CreateCommandContentID id;
};




#endif /* INCL_UTILS_DESERIALIZERS_CREATECOMMANDDESERIALIZER_HPP_ */
