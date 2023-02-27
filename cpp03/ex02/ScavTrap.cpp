#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->mana = 50;
    this->hp = 100;
    this->dmg = 10;
    std::cout << "Create ScavTrap\n";
}


ScavTrap::ScavTrap(std::string name_in)
{
    this->name = name_in;
    this->mana = 50;
    this->hp = 100;
    this->dmg = 10;
    std::cout << "Create ScavTrap with name\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destroy ScavTrap\n";

}

void ScavTrap::attack(const std::string& target) {
    if(hp <= 0){
        std::cout << "Bro, he's alredy dead...\n";    
        return;
    }
    if (mana < 1){
        std::cout << "ScavTrap " << name << " doesnt have enough mana to attack\n";
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage!\n";
}

void ScavTrap::guardGate(){
    if(hp <= 0){
        std::cout << "Bro, he's alredy dead...\n";    
        return;
    }
    std::cout << "ScavTrap " << name << " is now guarding the gate\n";
}
