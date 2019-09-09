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
        /* 定义嵌套类负责释放封装类的静态成员在堆上申请的内存 */
        class Garbo
        {
        public:  /* 嵌套类一般定义在封装类的private部分，并设置为public */
            Garbo() = default;
            ~Garbo()
            {
                /* 嵌套类可以自由访问封装类的所有静态成员，
                注意!!!是静态成员，因为非静态成员必须通过对象来访问 */
                for (size_t i = 0; i < MAX_OPERATION; i++) {
                    if (m_mem_list[i] != nullptr)  {
                        delete m_mem_list[i];
                        m_mem_list[i] = nullptr;
                        std::cout << "delete m_mem_list[i]" << std::endl;
                    }
                }
            }
        };
        /* 类的静态成员要在类外部，调用者使用前初始化 */
        static Garbo m_garbo;

    private:
        Number *m_receiver;  // 外部临时遍历，使用栈上空间，无需释放内存
        Action m_action;
        static Memento *m_mem_list[MAX_OPERATION];
        static Command *m_command_list[MAX_OPERATION];  // 外部申请堆上内存，外部释放
        static int m_num_commands;
        static int m_maxCommands;
    };

#ifdef  __cplusplus
}
#endif //  __cplusplus
#endif
