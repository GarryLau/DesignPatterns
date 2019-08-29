#include "FlyweightFactory.h"
#include "Model.h"

Model * FlyweightFactory::m_pool[] = { nullptr,nullptr };

int main() {
    FlyweightFactory::getModel(0)->showDetail();
    FlyweightFactory::getModel(1)->showDetail();

    FlyweightFactory::getModel(0)->showDetail();
    FlyweightFactory::getModel(1)->showDetail();

    FlyweightFactory::cleanUp();

    return 0;
}