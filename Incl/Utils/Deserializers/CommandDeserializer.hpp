/*
 * CommandDeserializer.hpp
 *
 *  Created on: May 20, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_DESERIALIZERS_COMMANDDESERIALIZER_HPP_
#define INCL_UTILS_DESERIALIZERS_COMMANDDESERIALIZER_HPP_

#include "Deserializer.hpp"

class CommandDeserializer : public Deserializer{
public:

	string ExtractCommandName(string& serialized_data);

	void CheckForValidityAndFormat(string& line);

protected:
	string ExtractContent(string& serialized_data);

protected:
	enum DefaultContentID {NAME, PARAMS};
	DefaultContentID content_ID;

	void CheckFormat(const string& line);

	void FormatLine(string& command);

	string deserialize(const string& dt);
};



#endif /* INCL_UTILS_DESERIALIZERS_COMMANDDESERIALIZER_HPP_ */
