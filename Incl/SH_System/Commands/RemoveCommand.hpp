/*
 * RemoveCommand.hpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#ifndef SH_SYSTEM_COMMANDS_REMOVECOMMAND_HPP_
#define SH_SYSTEM_COMMANDS_REMOVECOMMAND_HPP_

#include "../Command.hpp"

using std::string;

class RemoveCommand : public Command{
public:
	RemoveCommand(void);

	string Execute(  string& params);
};

#endif /* SH_SYSTEM_COMMANDS_REMOVECOMMAND_HPP_ */
