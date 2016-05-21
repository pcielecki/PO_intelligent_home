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
public:
	void
	ProcessLine(string& line);

	Smart_house::Adapter*
	FindAdapterByView(const string& userID, const string& ViewID);

	Smart_house::Adapter*
	FindAdapterByModel(const string& userID, const string& ViewID);

	Smart_house::Adapter*
	FindFirstDanglingAdapter(const string& userID);

	Smart_house::Model*
	FindModelByID(const string& modelID);

	Smart_house::View*
	FindViewByID(const string& viewID);


	vector<Smart_house::Model*>* GetModels(void)		{return &MyModels;}
	vector<Smart_house::View*>* GetViews(void)			{return &MyViews;}
	vector<Smart_house::Adapter*>* GetAdapters(void)	{return &MyAdapters;}

private:
	vector<Smart_house::Model*> 		MyModels;
	vector<Smart_house::View*> 			MyViews;
	vector<Smart_house::Adapter*> 		MyAdapters;

	void OnCommandNotValid(string wrongcmd);

};



#endif /* INCL_SH_SYSTEM_HPP_ */
