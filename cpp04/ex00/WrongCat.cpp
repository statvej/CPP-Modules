#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor\n";
    type = "WrongCat";
}


WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor\n";
}

void WrongCat::makeSound() const{
    std::cout << "Wrong MEEOOW\n";
}
