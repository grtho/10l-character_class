//
// Created by Griffin Thompson on 11/23/22.
//

#include <sstream>
#include "BaseClass.hpp"

BaseClass::BaseClass(int health, int strength) {
    this->hp = health;
    this->strength = strength;
}

std::string BaseClass::getStats() {
    std::stringstream ss;
    ss << "HP: " << hp << "\n";
    ss << "Strength " << strength << "\n";
    return ss.str();
}

