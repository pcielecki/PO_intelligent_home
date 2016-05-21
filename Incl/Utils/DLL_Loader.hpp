/*
 * DLL_Loader.hpp
 *
 *  Created on: May 21, 2016
 *      Author: piotr
 */

#ifndef INCL_DLL_LOADER_HPP_
#define INCL_DLL_LOADER_HPP_

#include <string>
#include "../SH_System/Command.hpp"
using std::string;

class DLL_Loader{
public:
	typedef Command* (*GetInstancePtr_t)(void) ;
	DLL_Loader(const string& path, const string& MethodName);
	~DLL_Loader();
	GetInstancePtr_t GetInstance;

private:

	string path;
	char* MethodName;
	void* handle;
};



#endif /* INCL_DLL_LOADER_HPP_ */
