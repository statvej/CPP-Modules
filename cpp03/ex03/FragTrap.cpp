#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->mana = 100;
    this->hp = 100;
    this->dmg = 30;
    std::cout << "Create FragTrap\n";
}


FragTrap::FragTrap(std::string name_in)
{
    this->name = name_in;
    this->mana = 100;
    this->hp = 100;
    this->dmg = 30;
    std::cout << "Create FragTrap with name\n";
}

FragTrap::~FragTrap()
{
    std::cout << "Destroy FragTrap\n";

}

void FragTrap::attack(const std::string& target) {
    if(hp <= 0){
        std::cout << "Bro, he's alredy dead...\n";    
        return;
    }
    if (mana < 1){
        std::cout << "FragTrap " << name << " doesnt have enough mana to attack\n";
        return;
    }
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage!\n";
}

void FragTrap::highFivesGuys(void){
    if(hp <= 0){
        std::cout << "Bro, he's alredy dead...\n";    
        return;
    }
    std::cout << "Guys, HIGH FIVE!!!\n";    
}