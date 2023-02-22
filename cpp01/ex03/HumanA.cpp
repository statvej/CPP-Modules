#include "HumanA.hpp"

#include <iostream>

void HumanA::attack(){
    std::cout << name << " attacks with their " << weapon_type.getType() << std::endl;
}

HumanA::HumanA(std::string nm, Weapon &wt)
: name(nm), weapon_type(wt)
{
    
}

HumanA::~HumanA()
{
}
