#ifndef _TV_H_
#define _TV_H_

#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

	class TV
	{
	public:
		void tvOn() {
			std::cout << "TV is on." << std::endl;
		}
		void tvOff() {
			std::cout << "TV is off." << std::endl;
		}
	};


#ifdef __cplusplus
}
#endif
#endif  // end of _TV_H_