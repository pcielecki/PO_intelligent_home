/*
 * Adapter.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_
#define INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_

#include <iostream>
#include <vector>
#include <memory>
#include "Model.hpp"
#include "View.hpp"
#include "../../Incl/Smart_house_iface/Adapter_param.hpp"
#include "../../Incl/Utils/Deserializers/String_dict_deserializer.hpp"
#include "../../Incl/Smart_house_iface/MVA_iface/MVA_Adapter.hpp"
#include "../../Incl/Smart_house_iface/Smart_house_defs.hpp"

using std::string;

using namespace Utils;

namespace Smart_house{

class Adapter : public MVA::MVA_Adapter{
	friend class AdapterFactory;
public:
	virtual string 				refresh(void) = 0;

	static Adapter* 			createAdapter(const string& serializedParams);

	void						setParam(const string& SerializedParam);
	string						getParamValue(string& param_name);

	string 						getOwner(void){		return userID;		}
	void						setOwner(string ownerID){this->userID = ownerID;}

	void						pair(Model* m, View* v);



protected:
	string 						userID;
	std::vector<Adapter_param*>	adapter_param_vector;
	Model*						model;
	View*						view;
	virtual 					~Adapter(void);
};



class AdapterFactory{
	friend class Adapter;

public:
	virtual ~AdapterFactory(){}

protected:
	virtual Adapter* produceAdapter(const string& serializedData) = 0;

private:
	static void InitializeAdapter(Adapter* adapter, const string& serializedParams);
	static AdapterFactory* GetAdapterFactory(const string& dataType);
};


};


#endif /* INCL_SMART_HOUSE_IFACE_ADAPTER_HPP_ */
