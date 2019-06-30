#include <iostream>
#include <string>
#include <mutex>     // mutex
#include "singleton.h"

std::mutex gmu;

/* Double-Checked Locking Pattern实现线程安全的Singleton模式 */
Singleton* Singleton::Instance()
{
    if (0 == m_instance)
    {
        gmu.lock();
        if (0 == m_instance)
        {
            m_instance = new Singleton;
        }
        gmu.unlock();
    }
    return m_instance;
}

std::string Singleton::getLogPath()
{
    return m_log_path;
}

Singleton::Singleton()
{
    m_log_path = "log.txt";
}

Singleton::~Singleton()
{
    m_log_path = "";
}

#if 0 /* 嵌套类也可在此定义 */
class Singleton::Garbo {
public:  /* 嵌套类一般定义在封装类的private部分，并设置为public */
    Garbo() = default;
    ~Garbo()
    {
        /* 嵌套类可以自由访问封装类的所有静态成员，
        注意!!!是静态成员，因为非静态成员必须通过对象来访问 */
        if (m_instance != nullptr)
        {
            delete m_instance;
            m_instance = nullptr;
            std::cout << "delete m_instance" << std::endl;
        }
    }
};
#endif

/* 类的静态成员初始化在类外，且应该在cpp文件中，不能在.h文件中，否则多次包含.h文件会造成重定义编译不过
不能在类定义中初始化静态数据成员，类定义只是描述对象的蓝图，不允许在其中指定初始值
初始化的格式：<数据类型><类名>::<静态数据成员名>=<值>   */
Singleton::Garbo Singleton::m_garbo;  /* 使用默认构造函数初始化 */
Singleton* Singleton::m_instance = 0;
