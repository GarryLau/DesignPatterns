#include <iostream>
#include <string>
#include <mutex>     // mutex
#include "singleton.h"

std::mutex gmu;

/* Double-Checked Locking Patternʵ���̰߳�ȫ��Singletonģʽ */
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

#if 0 /* Ƕ����Ҳ���ڴ˶��� */
class Singleton::Garbo {
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
#endif

/* ��ľ�̬��Ա��ʼ�������⣬��Ӧ����cpp�ļ��У�������.h�ļ��У������ΰ���.h�ļ�������ض�����벻��
�������ඨ���г�ʼ����̬���ݳ�Ա���ඨ��ֻ�������������ͼ��������������ָ����ʼֵ
��ʼ���ĸ�ʽ��<��������><����>::<��̬���ݳ�Ա��>=<ֵ>   */
Singleton::Garbo Singleton::m_garbo;  /* ʹ��Ĭ�Ϲ��캯����ʼ�� */
Singleton* Singleton::m_instance = 0;
