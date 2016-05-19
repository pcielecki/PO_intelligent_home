/*
 * CreateCommand.hpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#ifndef SH_SYSTEM_COMMANDS_CREATECOMMAND_HPP_
#define SH_SYSTEM_COMMANDS_CREATECOMMAND_HPP_

#include "../SH_System.hpp"
#include "../Command.hpp"

using std::string;


class CreateCommand : public Command{
public:
	void SetSystem(SH_System* system);
	virtual string Execute(  string& params);
private:
	SH_System* system;

	string ExtractType(string& params);
};

#endif /* SH_SYSTEM_COMMANDS_CREATECOMMAND_HPP_ */
