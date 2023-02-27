#include "ScavTrap.hpp"

int main()
{
    ScavTrap bro("Fedia");

    bro.attack("Jora");
    bro.takeDamage(50);
    bro.beRepaired(10);
    bro.guardGate();
    bro.takeDamage(50);
    bro.takeDamage(50);
    bro.attack("Jora");
}