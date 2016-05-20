/*
 * PairCommandDeserializer.hpp
 *
 *  Created on: May 20, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_PAIRCOMMANDDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_PAIRCOMMANDDESERIALIZER_HPP_

#include <string>
#include "CommandDeserializer.hpp"

using std::string;

class PairCommandDeserializer : public CommandDeserializer
{
public:
	string ExtractViewID(string& cmd);

	string ExtractModelID(string& cmd);

	string ExtractAdapterID(string& cmd);

private:
	enum PairIDs {ViewID, ModelID, AdapterID};
};


#endif /* INCL_UTILS_DESERIALIZERS_PAIRCOMMANDDESERIALIZER_HPP_ */
