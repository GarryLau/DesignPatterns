#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif

    class Singleton
    {
    public:
        /* DCLP */
        static Singleton* Instance();
        std::string getLogPath();
    protected:
        Singleton();
        ~Singleton();
    private:
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;
    private:
        /* 类的静态成员要在类外部，调用者使用前初始化 */
        static Singleton* m_instance;
        std::string m_log_path;
    private:
        /* 定义嵌套类负责释放封装类的静态成员在堆上申请的内存 */
        class Garbo
        {
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
        /* 类的静态成员要在类外部，调用者使用前初始化 */
        static Garbo m_garbo;
    };

#ifdef __cplusplus
}
#endif

#endif
