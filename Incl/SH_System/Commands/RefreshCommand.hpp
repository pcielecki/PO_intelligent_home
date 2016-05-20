/*
 * RefreshCommand.hpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#ifndef INCL_SH_SYSTEM_COMMANDS_REFRESHCOMMAND_HPP_
#define INCL_SH_SYSTEM_COMMANDS_REFRESHCOMMAND_HPP_

#include "../Command.hpp"

class RefreshCommand : public Command{
public:
	RefreshCommand(void);

	virtual string Execute(string& params);
};




#endif /* INCL_SH_SYSTEM_COMMANDS_REFRESHCOMMAND_HPP_ */
