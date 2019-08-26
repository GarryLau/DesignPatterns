#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include "Observer.h"
#include <vector>


class Subject
{
public:
    virtual ~Subject() = default;
    /* add observer */
    virtual void subscribe(Observer * observer) {
        m_observer.push_back(observer);
    }
    /* remove observer */
    virtual void unsubscribe(Observer * obsever) {
        int count = m_observer.size();
        for (int i = 0; i != count; ++i) {
            if (obsever == m_observer[i]) {
                break;
            }
            if (i < count) {
                m_observer.erase(m_observer.begin() + i);
            }
        }
    }
    /* notify all the observers */
    virtual void notify(std::string message) {
        int count = m_observer.size();
        for (int i = 0; i != count; ++i)
        {
            (m_observer[i])->update(message);
        }
    }
private:
    std::vector<Observer*> m_observer;
};


class ConcreteSubject : public Subject
{
public:
    ConcreteSubject(std::string name = "This' a ConcreteSubject object!") :m_name(name) {
        std::cout << "ConcreteSubject constructor called." << std::endl;
    }
    std::string getName() {
        return m_name;
    }
private:
    std::string m_name;
};

#endif