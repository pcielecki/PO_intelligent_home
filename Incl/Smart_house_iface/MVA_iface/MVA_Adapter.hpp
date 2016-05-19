/*
 * Adapter.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef MVA_IFACE_ADAPTER_HPP_
#define MVA_IFACE_ADAPTER_HPP_

#include "../../../Incl/Smart_house_iface/MVA_iface/MVA_Model.hpp"
#include "../../../Incl/Smart_house_iface/MVA_iface/MVA_View.hpp"

namespace MVA{

class MVA_Adapter{
public:
	virtual string 	refresh(const string& Parameters) = 0;

	MVA_View* 		getView(void){return this->view;}
	void			setView(MVA_View* v){this->view = v;}

	MVA_Model*		getModel(void){return this->model;}
	void			setModel(MVA_Model* m){this->model = m;}

protected:
	MVA_View* 		view;
	MVA_Model*		model;


	virtual ~MVA_Adapter(void){}
};

};

#endif /* MVA_IFACE_ADAPTER_HPP_ */
