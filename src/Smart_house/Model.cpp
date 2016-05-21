/*
 * Model.cpp



 *
 *  Created on: Apr 30, 2016
 *      Author: piotr
 */
#include "../../Incl/globals.hpp"

#if VERBOSITY >= 4
#include <iostream>
#endif

#include "../../Incl/Utils/Deserializers/ModelDeserializer.hpp"
#include "../../Incl/Utils/SH_exceptions.hpp"
#include "../../Incl/Models/Dummy_Model.hpp"
#include "../../Incl/Smart_house_iface/Model.hpp"

using namespace SH_Exceptions;

namespace Smart_house{

Model*
Model::createModel(const string& serializedParams)
{
	ModelDeserializer MDes;
	string category = MDes.GetCategory(serializedParams);

	ModelFactory* mf = ModelFactory::GetModelFactory(category);

	Model* model = mf->produceModel(serializedParams);

	delete mf;

	ModelFactory::InitializeModel(model, serializedParams);

#if VERBOSITY >= 4
	std::cout << 	"Created model: "<<
					"\ncategory = " << category <<
					"\nID =  "<< model->ID <<
					"\nLib = "<< model->DeviceLibrary << std::endl;
#endif

	return model;
}

ModelFactory*
ModelFactory::GetModelFactory(const string& modelType)
{
	if("DummyTemp" == modelType)
		return new DummyModelFactory;

	else
		throw(new SH_Exceptions::NotSupportedException(modelType));
}

void
ModelFactory::InitializeModel(Model* model, const string& serializedParams)
{
	ModelDeserializer Mdes;

	model->ID = Mdes.GetID(serializedParams);
	model->category = Mdes.GetCategory(serializedParams);
	model->DeviceLibrary = Mdes.GetLibrary(serializedParams);
}

};
