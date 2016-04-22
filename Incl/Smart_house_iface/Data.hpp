/*
 * Data.hpp
 *
 *  Created on: Apr 21, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_DATA_HPP_
#define INCL_SMART_HOUSE_IFACE_DATA_HPP_

#include <string>


using std::string;

class Data
{
public:
	static Data* deserializeAndCreate(const string& serialized_data);
	virtual string serializeAndDestroy(void) = 0;

	virtual void convert(string desired_unit) = 0;

protected:
	virtual ~Data(void){}
};

class DataDeserializer
{
public:
	static string getDataType(const string& serializedData);
};



#endif /* INCL_SMART_HOUSE_IFACE_DATA_HPP_ */
