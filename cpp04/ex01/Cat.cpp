
#include "Cat.hpp"


Cat::Cat()
{
    brain = new Brain();
    std::cout << "Cat default constructor\n";
    type = "Cat";
}


Cat::~Cat()
{
    delete brain;
    std::cout << "Cat default destructor\n";
}

void Cat::makeSound() const{
    std::cout << "MEEOOW\n";
}
