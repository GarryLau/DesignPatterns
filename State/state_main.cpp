#include "Context.h"
#include "StateA.h"
#include "StateB.h"

int main() {
	State *state = StateA::getInstance();
	Context acontext(state);
	acontext.Behavior1();  // Doing behavior1.
	acontext.Behavior2();  // Doing behavior2.
	acontext.Action1_S();  // Do something for context.Action1_S().
	acontext.Action2_S();  // Do something for context.Action2_S().
	/* 因为执行完acontext.Action2_S()之后Context的状态是A,而状态A没有重写Action3_S()，因此此时执行基类State的Action3_S()方法。 */
	acontext.Action3_S();  // Do default action3.

	return 0;
}
/* 出了main()之后调用析构函数，释放状态单例StateA::m_state和StateB::m_state */
// delete StateB:m_state.
// delete StateA:m_state.