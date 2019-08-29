#ifndef _AIR_CONDITION_H_
#define _AIR_CONDITION_H_

#include <iostream>

#ifdef __cplusplus
extern "C"{
#endif

class AirCondition
{
public:
	void airConditionOn() {
		std::cout << "Air Condition is on." << std::endl;
	}
	void airConditionOff() {
		std::cout << "Air Condition is off." << std::endl;
	}
};

#ifdef __cplusplus
}
#endif
#endif  // end of _AIR_CONDITION_H_