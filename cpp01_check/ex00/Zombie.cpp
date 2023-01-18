#include "Zombie.hpp"

Zombie::Zombie(std::string zom_name)
    : name(zom_name)
{
}

Zombie::~Zombie()
{
    std::cout << name << " : was destroyed\n";
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
