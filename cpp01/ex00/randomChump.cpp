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

void randomChump(std::string name) {
    Zombie chump(name);

    chump.announce();
}