#include "ClapTrap.hpp"

int main()
{
    ClapTrap bro("Fedia");

    bro.attack("Jora");
    bro.takeDamage(5);
    bro.beRepaired(1);
    bro.takeDamage(5);
    bro.takeDamage(5);
    bro.takeDamage(5);
    bro.attack("Jora");
}