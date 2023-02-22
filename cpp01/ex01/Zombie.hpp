#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(void);
    Zombie(std::string zom_name);
    ~Zombie();
    void rename(std::string new_name);
    void announce(void);
};

std::string getRandomName();
Zombie* zombieHorde( int N, std::string name );
