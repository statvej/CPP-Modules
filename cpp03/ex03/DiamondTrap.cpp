#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string inname)
: _name(inname)
{
    name = _name + "_clap_name";
    hp = FragTrap::hp;
    mana = ScavTrap::mana;
    dmg = FragTrap::dmg;
}

DiamondTrap::DiamondTrap()
{
    hp = FragTrap::hp;
    mana = ScavTrap::mana;
    dmg = FragTrap::dmg;
}

DiamondTrap::~DiamondTrap()
{
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTraps's names are :" << _name <<" and " << name << std::endl;
}
