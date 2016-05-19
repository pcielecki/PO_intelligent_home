/*
 * Command.hpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#ifndef INCL_COMMAND_HPP_
#define INCL_COMMAND_HPP_

#include "SH_System.hpp"

using std::string;

class Command
{
	friend class CommandFactory;

public:
	virtual string Execute(string& parameters) = 0;

protected:
	SH_System* system;
	virtual ~Command(){}
};

class CommandFactory
{
public:
	Command* ComposeCommand(string& params);

private:
	void CheckForValidity(const string& commandstring);
};


#endif /* INCL_COMMAND_HPP_ */
