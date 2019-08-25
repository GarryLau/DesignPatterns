#ifndef _LIGHT_H_
#define _LIGHT_H_

#include <iostream>

#ifdef __cplusplus
extern "C"{
#endif

    /* Receiver Class */
class Light
{
public:
    void LightOn() {
        std::cout << "Turning on the light." << std::endl;
    }
    void LightOff() {
        std::cout << "Turning off the light." << std::endl;
    }
};

#ifdef __cplusplus
}
#endif
#endif
