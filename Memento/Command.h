#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <iostream>
#include "Memento.h"
#include "Number.h"

#ifdef  __cplusplus
extern "C" {
#endif //  __cplusplus

#define MAX_OPERATION (20)

    class Command
    {
    public:
        typedef void(Number::*Action)();
        Command(Number *receiver, Action action) :m_receiver(receiver), m_action(action) {
            std::cout << "Command ctor called." << std::endl;
        }

        void execute() {
            if (m_num_commands >= MAX_OPERATION) {
                std::cout << "Commands are full." << std::endl;
                return;
            }
            m_mem_list[m_num_commands] = m_receiver->createMemento();
            m_command_list[m_num_commands] = this;
            if (m_num_commands > m_maxCommands) {
                m_maxCommands = m_num_commands;
            }
            m_num_commands++;
            (m_receiver->*m_action)();
        }

        static void unDo() {
            if (0 == m_num_commands) {
                std::cout << "There is nothing to undo at this point." << std::endl;
                return;
            }
            m_command_list[m_num_commands - 1]->m_receiver->reinstateMemento(m_mem_list[m_num_commands - 1]);
            m_num_commands--;
        }

        static void reDo() {
            if (m_num_commands > m_maxCommands || 0 == m_maxCommands) {
                std::cout << "There is nothing to redo at this point." << std::endl;
                return;
            }
            (m_command_list[m_num_commands]->m_receiver->*(m_command_list[m_num_commands]->m_action))();
            m_num_commands++;
        }
    private:
        Number *m_receiver;
        Action m_action;
        static Memento *m_mem_list[MAX_OPERATION];
        static Command *m_command_list[MAX_OPERATION];
        static int m_num_commands;
        static int m_maxCommands;
    };

#ifdef  __cplusplus
}
#endif //  __cplusplus
#endif
