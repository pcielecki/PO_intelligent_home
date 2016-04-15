/*
 * View.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_VIEW_HPP_
#define INCL_SMART_HOUSE_IFACE_VIEW_HPP_

#include "MVA_iface/MVA_View.hpp"

using std::string;

namespace Smart_house{

class View : public MVA::View{
public:
	virtual void update(string& serialized_params) const = 0 ;

	unsigned int 		getViewID(void);
	string			 	getCategory(void);


private:
	unsigned int 		viewID;
	string			 	category;
};

};



#endif /* INCL_SMART_HOUSE_IFACE_VIEW_HPP_ */
