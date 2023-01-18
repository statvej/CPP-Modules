#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
// #include "HumanA.hpp"
// #include "HumanB.hpp"

class Weapon
{
private:
    std::string type;
public:
    const std::string& getType();
    void setType(std::string new_type);
    Weapon();
    Weapon(std::string new_type);
    ~Weapon();
};
#endif