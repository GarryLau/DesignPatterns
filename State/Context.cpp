#include "Context.h"
#include "StateA.h"

/* 通过构造函数设定初始状态 */
Context::Context(State *state) {
	m_state = state;
}
/* 与状态有关的操作,在本实现中以_S作为标识，均委托给Context的State类型的成员m_state进行实现 */
void Context::Action1_S() {
	m_state->Action1_S(this);
}
void Context::Action2_S() {
	m_state->Action2_S(this);
}
void Context::Action3_S() {
	m_state->Action3_S(this);
}