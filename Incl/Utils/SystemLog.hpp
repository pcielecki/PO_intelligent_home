/*
 * SystemLog.hpp
 *
 *  Created on: May 20, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_SYSTEMLOG_HPP_
#define INCL_UTILS_SYSTEMLOG_HPP_

#include <string>

using std::string;

class SystemLog
{

public:
	SystemLog(string path){this->path = path;}
	void log(const string& line);

private:
	string path;
};



#endif /* INCL_UTILS_SYSTEMLOG_HPP_ */
