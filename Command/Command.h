#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <iostream>
#include "Light.h"

#ifdef __cplusplus
extern "C" {
#endif

    /* Command Interface */
    class ICommand
    {
    public:
        virtual void excute() = 0;
        ~ICommand(){}
    };

    /* Command for turning on the light */
    class OnCommand : public ICommand
    {
    public:
        OnCommand(Light *light) : m_light(light) {
            std::cout << "OnCommand ctor." << std::endl;
        }
        void excute()override {
            m_light->LightOn();
        }
    private:
        Light *m_light;
    };

    /* Command for turning off the light */
    class OffCommand : public ICommand
    {
    public:
        OffCommand(Light *light) : m_light(light) {
            std::cout << "OffCommand ctor." << std::endl;
        }
        void excute() override {
            m_light->LightOff();
        }
    private:
        Light *m_light;
    };

#ifdef __cplusplus
}
#endif
#endif
