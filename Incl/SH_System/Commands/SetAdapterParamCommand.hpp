/*
 * SetAdapterParamCommand.hpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#ifndef SH_SYSTEM_COMMANDS_SETADAPTERPARAMCOMMAND_HPP_
#define SH_SYSTEM_COMMANDS_SETADAPTERPARAMCOMMAND_HPP_

#include "Command.hpp"

using std::string;


class SetAdapterParamCommand : public Command{
	string Execute(  string& params);
};



#endif /* SH_SYSTEM_COMMANDS_SETADAPTERPARAMCOMMAND_HPP_ */
