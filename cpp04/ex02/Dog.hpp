
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog(/* args */);
    ~Dog();
    void makeSound() const;
};



#endif