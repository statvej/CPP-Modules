#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap bro("Fedia");

    bro.attack("you");
    bro.takeDamage(50);
    bro.beRepaired(10);
    bro.guardGate();
    bro.takeDamage(50);
    bro.takeDamage(50);
    bro.attack("Jora");

    FragTrap bro2("Kirril");

    bro2.attack("you");
    bro2.takeDamage(50);
    bro2.beRepaired(10);
    bro2.highFivesGuys();
    bro2.takeDamage(50);
    bro2.takeDamage(50);
    bro2.attack("you");
}