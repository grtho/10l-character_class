//
// Created by Griffin Thompson on 11/23/22.
//

#ifndef INC_10L_CHARACTER_CLASS_MAGE_HPP
#define INC_10L_CHARACTER_CLASS_MAGE_HPP
#include "BaseClass.hpp"

class Mage : virtual public BaseClass {
public:
    Mage(int hp, int strength, int mana);

    std::string getStats();

private:
    int mana;
};


#endif //INC_10L_CHARACTER_CLASS_MAGE_HPP
