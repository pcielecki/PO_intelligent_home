/*
 * Model.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_MODEL_HPP_
#define INCL_SMART_HOUSE_IFACE_MODEL_HPP_

#include <string>

#include "../../Incl/Smart_house_iface/MVA_iface/MVA_Model.hpp"
#include "../../Incl/Smart_house_iface/Smart_house_defs.hpp"

using std::string;

namespace Smart_house{


class Model : public MVA::MVA_Model{
	friend class ModelFactory;
public:
	virtual string	getData(void) = 0;

	string 			getModelID(void){return this->ID;}
	 string			getCategory(void){return this->category;}
	 static Model* createModel(const string& serializedParams);

protected:
	string 			ID;
	string			category;
	string 			DeviceLibrary;



};

class ModelFactory
{
	friend class Model;

public:
	virtual ~ModelFactory(){}

protected:
	virtual Model* produceModel(const string& serializedData) = 0;

private:
	static void InitializeModel(Model* model, const string& serializedParams);
	static ModelFactory* GetModelFactory(const string& dataType);

};

};

#endif /* INCL_SMART_HOUSE_IFACE_MODEL_HPP_ */
