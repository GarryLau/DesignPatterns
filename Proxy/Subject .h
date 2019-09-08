#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <iostream>

#ifdef  __cplusplus
extern "C" {
#endif //  __cplusplus

    class Subject
    {
    public:
        ~Subject(){}
        virtual void doRequest() = 0;
    };

    class RealSubject : public Subject
    {
    public:
        void doRequest() override {
            std::cout << "Real Subject do the request." << std::endl;
        }
    };

    class Proxy : public Subject
    {
    public:
        Proxy() : m_real_subject(new RealSubject()) {
            std::cout << "Proxy ctor called." << std::endl;
        }
        ~Proxy() {
            delete m_real_subject;
            std::cout << "Proxy dtor called." << std::endl;
        }
        void doRequest() override {
            m_real_subject->doRequest();
        }
    private:
        Subject *m_real_subject;
    };

#ifdef  __cplusplus
}
#endif //  __cplusplus
#endif