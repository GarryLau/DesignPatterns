#pragma once

#include "State.h"

class StateB : public State
{
public:
	/* StateB模式下Context做Action2_S、Action3_S是有意义的,因此无需实现Action1_S方法 */
	virtual void Action2_S(Context *context) override;
	virtual void Action3_S(Context *context) override;
	/* 具体状态以单例模式实现 */
	static State * getInstance() {
		if (nullptr == m_state) {
			m_state = new StateB;
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
				std::cout << "delete StateB:m_state." << std::endl;
			}
		}
	};
	static Garbo m_garbo;
};