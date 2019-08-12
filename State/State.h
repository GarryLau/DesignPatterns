#pragma once

#include "Context.h"

class State
{
public:
	~State() = default;
	/* State为所有委托给它的请求实现缺省行为 */
	virtual void Action1_S(Context *context) {
		std::cout << "Do default action1." << std::endl;
	}
	virtual void Action2_S(Context *context) {
		std::cout << "Do default action2." << std::endl;
	}
	virtual void Action3_S(Context *context) {
		std::cout << "Do default action3." << std::endl;
	}
protected:
	void ChangeState(Context *context,State *state) {
		context->ChangeState(state);
	}
};