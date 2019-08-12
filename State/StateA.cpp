#include "StateA.h"
#include "StateB.h"

/* StateA模式下Context做Action1_S是有意义的,因此无需实现Action2_S、Action3_S方法 */
void StateA::Action1_S(Context *context) {
	/* 在StateA.Action1_S中实现Context的Action1_S中要实现的行为 */
	std::cout << "Do something for context.Action1_S()." << std::endl;
	/* 由A状态转换为B状态 */
	ChangeState(context, StateB::getInstance());
}

/* 静态数据成员，在cpp中初始化为nullptr */
State *StateA::m_state = nullptr;
/* 使用默认构造函数初始化 */
StateA::Garbo StateA::m_garbo;