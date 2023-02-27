#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : hp(10), mana(10), dmg(0) {
        std::cout << "Create ClapTrap\n";
}

ClapTrap::ClapTrap(std::string in_name)
    : name(in_name), hp(10), mana(10), dmg(0)
{
    std::cout << "Create ClapTrap with name\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destroy ClapTrap\n";
}

void ClapTrap::attack(const std::string& target) {
    if(hp <= 0){
        std::cout << "Bro, he's alredy dead...\n";    
        return;
    }
    if (mana < 1){
        std::cout << "ClapTrap " << name << " doesnt have enough mana to attack\n";
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << dmg << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount){
    if(hp <= 0){
        std::cout << "Bro, he's alredy dead...\n";    
        return;
    }
    hp -= amount;
    std::cout << "ClapTrap " << name << " recievs " << amount << " points of damage";
    if(hp <= 0)
        std::cout << " and DIED\n";
    else
        std::cout << std::endl;
}   

void ClapTrap::beRepaired(unsigned int amount){
    if(hp <= 0){
        std::cout << "Bro, he's alredy dead...\n";    
        return;
    }
    if (mana < 1){
        std::cout << "ClapTrap " << name << " doesnt have enough mana to heal\n";
        return;
    }
    std::cout << "ClapTrap " << name << " healed by " << amount << "HP\n";
}
