#include "Zombie.hpp"

std::string getRandomName()
{
    std::srand(std::time(nullptr));
    int r = std::rand();
    std::string name_arr[5] = {
        "Kirill",
        "Zhora",
        "Fedia",
        "Dania",
        "Sasha"
    };
    return name_arr[r % 5 - 0];
}

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string zom_name)
    : name(zom_name)
{
}

Zombie::~Zombie()
{
    std::cout << name << " : was destroyed\n";
}

void Zombie::rename(std::string new_name){
    name = new_name;
}

void Zombie::announce(void) {
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
