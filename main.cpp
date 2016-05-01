#include <iostream>
#include "Incl/Smart_house_iface/Model.hpp"
#include "Incl/Smart_house_iface/View.hpp"
#include "Incl/Smart_house_iface/Adapter.hpp"

using namespace Smart_house;

int main(void)
{
	Model* m = 	Model::createModel("DummyTemp 001 Temperature //dev//cpp");
	View* v = 	View::createView("Console 001");
	Adapter* a =Adapter::createAdapter("ToDisplay piotr");

	a->pair(m, v);

	a->setParam("unit=K");
	a->refresh();


	return 0;
}
