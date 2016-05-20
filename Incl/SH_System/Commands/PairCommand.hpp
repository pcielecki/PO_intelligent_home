/*
 * PairCommand.hpp
 *
 *  Created on: May 20, 2016
 *      Author: piotr
 */

#ifndef INCL_SH_SYSTEM_COMMANDS_PAIRCOMMAND_HPP_
#define INCL_SH_SYSTEM_COMMANDS_PAIRCOMMAND_HPP_

#include "../Command.hpp"

class PairCommand : public Command{
public:
	virtual string Execute(string& cmd);




};



#endif /* INCL_SH_SYSTEM_COMMANDS_PAIRCOMMAND_HPP_ */
