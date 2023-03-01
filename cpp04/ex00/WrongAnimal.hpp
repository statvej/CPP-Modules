
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>
class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(/* args */);
    WrongAnimal(std::string in_type);
    WrongAnimal(const WrongAnimal &copy);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &copy);

    void virtual makeSound() const;
    const std::string &getType() const;
};

#endif