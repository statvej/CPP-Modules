#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon_type;
public:
    HumanA(std::string nm, Weapon &wt);
    ~HumanA();
    void attack();
};

#endif