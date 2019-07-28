#include "Cook.h"

int main() {
    Cook acook;
    SeaFoodPizzaBuilder spb;
    acook.makePizza(&spb);
    acook.showCookedPizza();

    CheesePizzaBuilder cpb;
    acook.makePizza(&cpb);
    acook.showCookedPizza();

    return 0;
}