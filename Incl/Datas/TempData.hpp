/*
 * TempData.hpp
 *
 *  Created on: Apr 21, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_TEMPDATA_HPP_
#define INCL_SMART_HOUSE_IFACE_TEMPDATA_HPP_


#include "../../Incl/Datas/IntData.hpp"

class TempData : public IntData{
public:
	friend class TempDataFactory;
	//TempData(int temperature){this->value = temperature;}

	void convert(std::string desired_unit);

	static const unsigned int ZERO_CELSIUS_TO_KELVINS = 273;


private:
	void to_Kelvins(void);

	void to_Celsius(void);
};

class TempDataFactory : public DataFactory{

public:
	Data* produceData(const string& dataType);
};

#endif /* INCL_SMART_HOUSE_IFACE_TEMPDATA_HPP_ */
