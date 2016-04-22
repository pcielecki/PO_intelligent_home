/*
 * SH_exceptions.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SH_EXCEPTIONS_HPP_
#define INCL_SH_EXCEPTIONS_HPP_

#include <string>

namespace SH_Exceptions{



class StringEmptyException{
public:
	StringEmptyException(std::string& EmptyStringName)
	{
		this->string_name = EmptyStringName;
	}
	StringEmptyException(void){}

	std::string getStringName(void)	{return this->string_name;}

private:
	std::string string_name;
};

class DataTypeNotSupportedException{
public:
	DataTypeNotSupportedException(std::string& s)	{	this->dataTypeName = s;		}
	std::string& getDataTypeName(void)				{	return this->dataTypeName;	}
private:
	std::string dataTypeName;
};

};

#endif /* INCL_SH_EXCEPTIONS_HPP_ */
