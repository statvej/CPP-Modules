#include "HumanB.hpp" 
#include <iostream>

void HumanB::setWeapon(Weapon& wt){
    weapon_type = &wt;
}

void HumanB::attack(){
    std::cout << name << " attacks with their " << weapon_type->getType() << std::endl;
}

HumanB::HumanB(std::string nm)
: name(nm), weapon_type(NULL)
{
}

HumanB::~HumanB()
{
}
