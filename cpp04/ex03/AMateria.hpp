#include <string>
#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp" 

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class ICharacter;

class AMateria
{
protected:
    std::string _type;
public:
    AMateria(){}
    virtual ~AMateria(){}
    AMateria(std::string const& type);
    std::string const& getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif