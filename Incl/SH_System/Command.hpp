/*
 * Command.hpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#ifndef INCL_COMMAND_HPP_
#define INCL_COMMAND_HPP_


#include <string>
#include "SH_System.hpp"

using std::string;

class Command
{
	friend class CommandFactory;

public:
	virtual string Execute(string& parameters) = 0;
	void SetSystem(SH_System* system);
	string GetHelp(void)		{return HelpText;}

protected:
	SH_System* system;

	virtual ~Command(){}

private:
	string HelpText;
};

class CommandFactory
{
public:
	Command* ComposeCommand(string& params);

};


#endif /* INCL_COMMAND_HPP_ */
