/*
 * CreateCommand.hpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#ifndef SH_SYSTEM_COMMANDS_CREATECOMMAND_HPP_
#define SH_SYSTEM_COMMANDS_CREATECOMMAND_HPP_


#include "../Command.hpp"

using std::string;


class CreateCommand : public Command{
	virtual string Execute(  string& params);

	string ExtractType(string& params);
};

#endif /* SH_SYSTEM_COMMANDS_CREATECOMMAND_HPP_ */
