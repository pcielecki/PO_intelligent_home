/*
 * SerParamCommandDeserializer.hpp
 *
 *  Created on: May 21, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_SETPARAMCOMMANDDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_SETPARAMCOMMANDDESERIALIZER_HPP_

#include "CommandDeserializer.hpp"

class SetParamCommandDeserializer : public CommandDeserializer{
public:
	string ExtractUserID(string& cmd);
	string ExtractMVSelection(string& cmd);
	string ExtractMVID(string& cmd);

private:
	enum setparamids{USERID, SEARCH_BY_M_OR_V, MV_ID};
};



#endif /* INCL_UTILS_DESERIALIZERS_SETPARAMCOMMANDDESERIALIZER_HPP_ */
