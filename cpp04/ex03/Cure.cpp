#include "Cure.hpp"

Cure::Cure()
{
    _type = "Cure";
}

Cure::~Cure()
{
}

Cure::Cure(Cure const& other) {
    *this = other;
}

Cure& Cure::operator=(Cure const& other) {
    this->_type = other.getType();
    return *this;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
