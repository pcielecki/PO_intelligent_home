#include <dlfcn.h>
#include <stdlib.h>
#include "../../Incl/globals.hpp"
#if 4 <= VERBOSITY
#include <iostream>
#endif
#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Utils/DLL_Loader.hpp"

DLL_Loader::DLL_Loader(const string& path, const string& MethodName)
{
	this->path = path;
	this->GetInstance = NULL;
	this->MethodName = (char*)MethodName.c_str();

#if 4 <= VERBOSITY
	std::cout << "Loading shared object " << path << " with symbol " << MethodName << std::endl;
#endif

	this->handle = (void*)dlopen(path.c_str(), RTLD_LAZY);

	if(NULL == handle)
		throw SH_Exceptions::NotSupportedException(path);

	this->GetInstance = (GetInstancePtr_t)dlsym(handle, this->MethodName);

	if(char* error = dlerror())
		throw SH_Exceptions::StringEmptyException(error);
}

DLL_Loader::~DLL_Loader(void)
{
	dlclose(this->handle);
}
