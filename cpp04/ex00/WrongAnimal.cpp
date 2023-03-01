#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: type("general animal")
{
    std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(std::string in_type)
: type(in_type)
{
    std::cout << "WrongAnimal constructor with name\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongWrongAnimal destructor\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
    this->type = copy.type;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    std::cout << "WrongAnimal copy constructor\n";
    *this = copy;
}


void WrongAnimal::makeSound()const{
    std::cout << "%^@$!^E#&@#^^@$#^&!%\n(unrecognizeble WrongANIMAL sounds)\n";
}

const std::string &WrongAnimal::getType()const{
    return this->type;
}