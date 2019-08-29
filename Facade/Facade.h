#ifndef _FACADE_H_
#define _FACADE_H_

#include <iostream>
#include "AirCondition.h"
#include "Alarm.h"
#include "TV.h"

#ifdef __cplusplus
extern "C" {
#endif

	class Facade
	{
	public:
		Facade(){
			std::cout << "Facade ctor called." << std::endl;
		}
		void goToWork() {
			m_air_condition.airConditionOff();
			m_tv.tvOff();
			m_alarm.alarmOn();
		}
		void comeHome() {
			m_air_condition.airConditionOn();
			m_tv.tvOn();
			m_alarm.alarmOff();
		}
	private:
		AirCondition m_air_condition;
		Alarm m_alarm;
		TV m_tv;
	};

#ifdef __cplusplus
}
#endif
#endif  // end of _FACADE_H_