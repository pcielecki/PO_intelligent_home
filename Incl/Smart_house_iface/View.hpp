/*
 * View.hpp
 *
 *  Created on: Apr 15, 2016
 *      Author: piotr
 */

#ifndef INCL_SMART_HOUSE_IFACE_VIEW_HPP_
#define INCL_SMART_HOUSE_IFACE_VIEW_HPP_

#include <string>

#include "../../Incl/Smart_house_iface/MVA_iface/MVA_View.hpp"

using std::string;

namespace Smart_house{

class View : public MVA::MVA_View{
	friend class ViewFactory;
public:
	static View* 		createView(const string& serializedParams);
	virtual void 		update(string& serialized_params) const = 0 ;

	unsigned int 		getViewID(void);


private:
	string		 		viewID;
};





class ViewFactory{
	friend class View;
public:
	virtual ~ViewFactory(){};

protected:
	virtual View* produceView(const string& serializedData) = 0;

private:
	static void InitializeView(View* view, const string& serializedParams);
	static ViewFactory* GetViewFactory(const string& dataType);

};

};



#endif /* INCL_SMART_HOUSE_IFACE_VIEW_HPP_ */
