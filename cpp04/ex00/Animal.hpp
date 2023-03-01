
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    Animal(std::string in_type);
    Animal(const Animal &copy);
    virtual ~Animal();
    Animal &operator=(const Animal &copy);

    void virtual makeSound() const;
    const std::string &getType() const;
};

#endif