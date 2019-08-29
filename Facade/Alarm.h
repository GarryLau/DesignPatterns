#ifndef _ALARM_H_
#define _ALARM_H_

#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

	class Alarm
	{
	public:
		void alarmOn() {
			std::cout << "Alarm is on." << std::endl;
		}
		void alarmOff() {
			std::cout << "Alarm is off." << std::endl;
		}
	};

#ifdef __cplusplus
}
#endif
#endif // end of _ALARM_H_