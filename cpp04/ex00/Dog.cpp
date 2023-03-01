
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor\n";
    type = "Dog";
}


Dog::~Dog()
{
    std::cout << "Dog default destructor\n";
}

void Dog::makeSound() const{
    std::cout << "BARK BARK!!!\n";

}
