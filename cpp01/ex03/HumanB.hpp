#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon* weapon_type;
public:
    HumanB(std::string nm);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& wt);
};

#endif