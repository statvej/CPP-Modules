#include "Ice.hpp"


Ice::Ice()
{
    _type = "Ice";
}

Ice::~Ice()
{
}

Ice::Ice(Ice const& other) {
    *this = other;
}

Ice& Ice::operator=(Ice const& other) {
    this->_type = other.getType();
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
