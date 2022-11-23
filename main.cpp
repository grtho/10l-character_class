#include <iostream>
#include <vector>
#include "Mage.hpp"
#include "Knight.hpp"
int main() {
    std::vector<BaseClass*> list;

    list.push_back(new Mage(100, 200, 300));
    list.push_back(new Knight(200,500, 1000));
    list.push_back(new Mage(100, 50, 550));
    list.push_back(new Knight(1000, 250, 1250));

    for (BaseClass* character : list) {
        std::cout << character->getStats() << std::endl;
    }

    // I think it's already getting freed (RAII)
    //for (BaseClass* character: list) {
    //    delete character;
    //}
    return 0;
}
