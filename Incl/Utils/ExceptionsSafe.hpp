/*
 * ExceptionsSafe.hpp
 *
 *  Created on: May 21, 2016
 *      Author: piotr
 */

#ifndef INCL_UTILS_EXCEPTIONSSAFE_HPP_
#define INCL_UTILS_EXCEPTIONSSAFE_HPP_

class ExceptionSafe{
public:
	ExceptionSafe(void){}
	ExceptionSafe(void* objptr);

	~ExceptionSafe();

	void* objptr;
};



#endif /* INCL_UTILS_EXCEPTIONSSAFE_HPP_ */
