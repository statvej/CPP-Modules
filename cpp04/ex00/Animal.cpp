
#include "Animal.hpp"

Animal::Animal()
: type("general animal")
{
    std::cout << "Animal constructor\n";
}

Animal::Animal(std::string in_type)
: type(in_type)
{
    std::cout << "Animal constructor with name\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor\n";
}

Animal &Animal::operator=(const Animal &copy){
    this->type = copy.type;
    return *this;
}

Animal::Animal(const Animal &copy){
    std::cout << "Animal copy constructor\n";
    *this = copy;
}


void Animal::makeSound()const{
    std::cout << "%^@$!^E#&@#^^@$#^&!%\n(unrecognizeble ANIMAL sounds)\n";
}

const std::string &Animal::getType()const{
    return this->type;
}
