
#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    std::cout << "Dog default constructor\n";
    type = "Dog";
}


Dog::~Dog()
{
    delete brain;
    std::cout << "Dog default destructor\n";
}

void Dog::makeSound() const{
    std::cout << "BARK BARK!!!\n";

}
