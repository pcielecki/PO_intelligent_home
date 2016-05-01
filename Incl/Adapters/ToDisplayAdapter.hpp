/*
 * ToDisplayAdapter.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_TODISPLAYADAPTER_HPP_
#define INCL_TODISPLAYADAPTER_HPP_

#include <string>

#include "../../Incl/Smart_house_iface/Adapter.hpp"

using std::string;
using Smart_house::Adapter;
using Smart_house::AdapterFactory;

class ToDisplayAdapter : public Adapter{
public:
	void 				refresh(void);
	void				setParam(string& serialized_param);

private:
	string desired_unit;
};


class ToDisplayAdapterFactory : public AdapterFactory{
public:
	virtual Adapter* produceAdapter(const string& serializedParams)
	{
		return new ToDisplayAdapter;
	}
};

#endif /* INCL_TODISPLAYADAPTER_HPP_ */
