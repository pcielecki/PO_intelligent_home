/*
 * RefreshCommandDeserializer.hpp
 *
 *  Created on: May 21, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_REFRESHCOMMANDDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_REFRESHCOMMANDDESERIALIZER_HPP_

#include "CommandDeserializer.hpp"

using std::string;

class RefreshCommandDeserializer : public CommandDeserializer{
public:
	string ExtractUserID(string& cmd);

	string ExtractViewID(string& cmd);

private:
	enum refresh_ids{userID, viewID, AdditionalParams};
};



#endif /* INCL_UTILS_DESERIALIZERS_REFRESHCOMMANDDESERIALIZER_HPP_ */
