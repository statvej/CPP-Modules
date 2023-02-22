
#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hp;
    int mana;
    int dmg;
public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ClapTrap();
    ClapTrap(std::string in_name);
    ~ClapTrap();
};

