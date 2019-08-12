#pragma once

#include "State.h"

class StateA : public State
{
public:
	/* StateA模式下Context做Action1_S是有意义的,因此无需实现Action2_S、Action3_S方法 */
	virtual void Action1_S(Context *context) override;
	/* 具体状态以单例模式实现 */
	static State * getInstance() {
		if (nullptr == m_state) {
			m_state = new StateA;
		}
		return m_state;
	}
private:
	static State *m_state;
	class Garbo
	{
	public:
		Garbo() = default;
		~Garbo() {
			if (nullptr != m_state) {
				delete m_state;
				m_state = nullptr;
				std::cout << "delete StateA:m_state." << std::endl;
			}
		}
	};
	static Garbo m_garbo;
};