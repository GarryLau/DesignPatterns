#pragma once

#include <iostream>

class Context
{
	friend class State;
public:
	/* 通过构造函数设定初始状态 */
	Context(State *state);
	/* 与状态有关的操作,在本实现中以_S作为标识，均委托给Context的State类型的成员m_state进行实现 */
	void Action1_S();
	void Action2_S();
	void Action3_S();
	/* 与状态无关的操作,没有_S */
	void Behavior1() {
		std::cout << "Doing behavior1." << std::endl;
	}
	void Behavior2() {
		std::cout << "Doing behavior2." << std::endl;
	}
private:
	/* 改变状态,此函数不需进行委托 */
	void ChangeState(State *state) {
		m_state = state;
	}
	State *m_state;
};