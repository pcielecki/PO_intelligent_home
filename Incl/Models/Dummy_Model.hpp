/*
 * Dummy_Model.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_DUMMY_MODELS_DUMMY_MODEL_HPP_
#define INCL_DUMMY_MODELS_DUMMY_MODEL_HPP_

#include <string>

#include "../../Incl/Smart_house_iface/Model.hpp"

using std::string;
using Smart_house::Model;
using Smart_house::ModelFactory;

class Dummy_Model : public Model{
public:
	string 	getData(void);
	string getType(void);

};

class DummyModelFactory : public ModelFactory{
	virtual Model* produceModel(const string& serializedData)
	{
		return new Dummy_Model;
	}
};


#endif /* INCL_DUMMY_MODELS_DUMMY_MODEL_HPP_ */
