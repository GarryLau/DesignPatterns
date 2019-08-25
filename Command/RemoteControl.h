#ifndef _REMOTE_CONTROL_H_
#define _REMOTE_CONTROL_H_

#include <iostream>
#include "Command.h"

#ifdef __cplusplus
extern "C" {
#endif

    /* invoker : Stores the ConcreteCommand object  */
    class RemoteControl
    {
    public:
        void setCommand(ICommand *command){
            m_command = command;
        }
        void buttonPressed() {
            m_command->excute();
        }
    private:
        ICommand *m_command;
    };

#ifdef __cplusplus
}
#endif
#endif
