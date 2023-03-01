
#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat default constructor\n";
    type = "Cat";
}


Cat::~Cat()
{
    std::cout << "Cat default destructor\n";
}

void Cat::makeSound() const{
    std::cout << "MEEOOW\n";
}
