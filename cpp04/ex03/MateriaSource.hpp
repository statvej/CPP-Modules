
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria* learnedMateria[4];
    int learnedMateriaCount;
public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const& type);
};

#endif