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
        /* ��ľ�̬��ԱҪ�����ⲿ��������ʹ��ǰ��ʼ�� */
        static Singleton* m_instance;
        std::string m_log_path;
    private:
        /* ����Ƕ���ฺ���ͷŷ�װ��ľ�̬��Ա�ڶ���������ڴ� */
        class Garbo
        {
        public:  /* Ƕ����һ�㶨���ڷ�װ���private���֣�������Ϊpublic */
            Garbo() = default;
            ~Garbo()
            {
                /* Ƕ����������ɷ��ʷ�װ������о�̬��Ա��
                ע��!!!�Ǿ�̬��Ա����Ϊ�Ǿ�̬��Ա����ͨ������������ */
                if (m_instance != nullptr)
                {
                    delete m_instance;
                    m_instance = nullptr;
                    std::cout << "delete m_instance" << std::endl;
                }
            }
        };
        /* ��ľ�̬��ԱҪ�����ⲿ��������ʹ��ǰ��ʼ�� */
        static Garbo m_garbo;
    };

#ifdef __cplusplus
}
#endif

#endif
