//
// Created by Griffin Thompson on 11/23/22.
//

#include <sstream>
#include "Mage.hpp"

Mage::Mage(int hp, int strength, int mana) : BaseClass(hp, strength) {
    this->mana = mana;
}

std::string Mage::getStats() {
    std::stringstream ss;
    ss << "HP: " << hp << "\n";
    ss << "Strength " << strength << "\n";
    ss << "Mana: " << mana << "\n";
    return ss.str();
}