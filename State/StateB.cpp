#include "StateB.h"
#include "StateA.h"

/* StateB模式下Context做Action2_S、Action3_S是有意义的,因此无需实现Action1_S方法 */
void StateB::Action2_S(Context *context) {
	/* 在StateB.Action2_S中实现Context的Action2_S中要实现的行为 */
	std::cout << "Do something for context.Action2_S()." << std::endl;
	/* 由B状态转换为A状态 */
	ChangeState(context, StateA::getInstance());
}
void StateB::Action3_S(Context *context) {
	/* 在StateB.Action3_S中实现Context的Action3_S中要实现的行为 */
	std::cout << "Do something for context.Action3_S()." << std::endl;
	/* 由B状态转换为A状态 */
	ChangeState(context, StateA::getInstance());
}

/* 静态数据成员，在cpp中初始化为nullptr */
State *StateB::m_state = nullptr;
/* 使用默认构造函数初始化 */
StateB::Garbo StateB::m_garbo;