/*
 * View.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_VIEW_HPP_
#define INCL_SMART_HOUSE_IFACE_VIEW_HPP_

#include "../MVA_iface/View.hpp"

namespace Smart_house{

class View : public MVA::View{
public:
	virtual void update(MVA::MVA_string& serialized_params) = 0;

	ID_t 				getViewID(void);
	MVA::MVA_string 	getCategory(void);


private:
	ID_t 				viewID;
	MVA::MVA_string 	category;
};

};



#endif /* INCL_SMART_HOUSE_IFACE_VIEW_HPP_ */
