//
// Created by Griffin Thompson on 11/23/22.
//

#ifndef INC_10L_CHARACTER_CLASS_BASECLASS_HPP
#define INC_10L_CHARACTER_CLASS_BASECLASS_HPP
#include <iostream>

class BaseClass {
public:
    BaseClass(int hp, int strength);

    virtual std::string getStats();

protected:
    int hp;
    int strength;
};


#endif //INC_10L_CHARACTER_CLASS_BASECLASS_HPP
