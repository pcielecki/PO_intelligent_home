/*
 * Data.hpp
 *
 *  Created on: Apr 21, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_DATA_HPP_
#define INCL_SMART_HOUSE_IFACE_DATA_HPP_

#include <string>


/*
 * standard serialized data format:
 * 	[datatype unit {val_n}]
 * datatype is eg. Temperature, Pressure, IsDoorOpen
 */



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

class DataFactory
{
public:
	static DataFactory* GetDataFactory(const string& dataType);

	virtual Data* produceData(const string& serializedData) = 0;

	virtual ~DataFactory(){}
};



#endif /* INCL_SMART_HOUSE_IFACE_DATA_HPP_ */
