#include "ClapTrap.hpp"

int main()
{
    ClapTrap pp("hui");

    pp.attack("loh");
    pp.takeDamage(5);
    pp.beRepaired(1);
    pp.takeDamage(5);
    pp.takeDamage(5);
    pp.takeDamage(5);
    pp.attack("loh");
}