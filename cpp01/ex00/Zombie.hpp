#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string zom_name);
    ~Zombie();
    void announce(void);
};

Zombie* newZombie(std::string name);
std::string getRandomName();
void randomChump( std::string name );
