
#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class  Ice: public AMateria
{
public:
    Ice();
    ~Ice();
    Ice(Ice const& other);
    Ice& operator=(Ice const& other);

    AMateria* clone() const;
    void use(ICharacter& target);
};


#endif