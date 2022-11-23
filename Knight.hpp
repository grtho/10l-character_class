//
// Created by Griffin Thompson on 11/23/22.
//

#ifndef INC_10L_CHARACTER_CLASS_KNIGHT_HPP
#define INC_10L_CHARACTER_CLASS_KNIGHT_HPP
#include "BaseClass.hpp"

class Knight : virtual public BaseClass {
public:
    Knight(int hp, int strength, int rage);

    std::string getStats();

private:
    int rage;

};


#endif //INC_10L_CHARACTER_CLASS_KNIGHT_HPP
