#include "Weapon.hpp"

void Weapon::setType(std::string new_type){
    type = new_type;
}

const std::string& Weapon::getType(){
    std::string &ref = type;
    return ref;
}

Weapon::Weapon(std::string t)
: type(t)
{
}

Weapon::Weapon()
{
}


Weapon::~Weapon()
{
}
