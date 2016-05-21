/*
 * ShowMVAContentsCommand.hpp
 *
 *  Created on: May 21, 2016
 *      Author: piotr
 */

#ifndef INCL_SH_SYSTEM_COMMANDS_SHOWMVACONTENTSCOMMAND_HPP_
#define INCL_SH_SYSTEM_COMMANDS_SHOWMVACONTENTSCOMMAND_HPP_


#include "../Command.hpp"

class ShowMVAContentsCommand : public Command
{
public:
	ShowMVAContentsCommand(void);

	virtual string Execute(string& cmd);
};


#endif /* INCL_SH_SYSTEM_COMMANDS_SHOWMVACONTENTSCOMMAND_HPP_ */
