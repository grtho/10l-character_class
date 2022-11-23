//
// Created by Griffin Thompson on 11/23/22.
//

#include <sstream>
#include "Knight.hpp"

Knight::Knight(int hp, int strength, int rage) : BaseClass(hp, strength) {
    this->rage = rage;
}

std::string Knight::getStats() {
    std::stringstream ss;
    ss << "HP: " << hp << "\n";
    ss << "Strength: " << strength << "\n";
    ss << "Rage: " << rage << "\n";
    return ss.str();
}