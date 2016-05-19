/*
 * SH_System.hpp
 *
 *  Created on: May 19, 2016
 *      Author: piotr
 */

#ifndef INCL_SH_SYSTEM_HPP_
#define INCL_SH_SYSTEM_HPP_

#include <vector>
#include "../Smart_house_iface/Adapter.hpp"
#include "../Smart_house_iface/Model.hpp"
#include "../Smart_house_iface/View.hpp"
#include "../Smart_house_iface/Adapter_param.hpp"

using Smart_house::Adapter_param;
using std::vector;

class SH_System{
	void ProcessLine(string& line);
private:
	vector<Smart_house::Model*> 		MyModels;
	vector<Smart_house::View*> 			MyViews;
	vector<Smart_house::Adapter*> 		MyAdapters;

	void ExtractCommandName(string& line);
};



#endif /* INCL_SH_SYSTEM_HPP_ */
