#ifndef _FLYWEIGHT_FACTORY_H_
#define _FLYWEIGHT_FACTORY_H_

#include <map>
#include <string>
#include "Model.h"

#ifdef __cplusplus
extern "C" {
#endif

    class FlyweightFactory
    {
    public:
        static Model *getModel(int type) {
            switch (type+1)
            {
            case 1:
                if (nullptr == m_pool[type]) {
                    m_pool[type] = new Airbus();
                }
                return m_pool[type];
            case 2:
                if (nullptr == m_pool[type]) {
                    m_pool[type] = new Boeing();
                }
                return m_pool[type];
            default:
                std::cout << "Unknown aeroplane type!" << std::endl;
                return nullptr;
            }
        }
        static void cleanUp() {
            for (int i = 0; i != 2; ++i) {
                if (m_pool[i]) {
                    delete m_pool[i];
                }
            }
            std::cout << "Variety of model dtors called." << std::endl;
        }
    private:
        static Model *m_pool[];
    };

#ifdef __cplusplus
}
#endif
#endif
