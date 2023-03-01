#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    learnedMateriaCount = 0;
    for (int i = 0; i < 4; i++)
        learnedMateria[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4 && learnedMateria[i]; i++)
        delete learnedMateria[i];
}

void MateriaSource::learnMateria(AMateria* materiaToLearn) {
    if (learnedMateriaCount < 4) {
        learnedMateria[learnedMateriaCount] = materiaToLearn->clone();
        learnedMateriaCount++;
    }
}

AMateria* MateriaSource::createMateria(std::string const& type){
    for (int i = 0; i < learnedMateriaCount; i++)
    {
        if(learnedMateria[i]->getType() == type)
            return learnedMateria[i]->clone();
    }
    return NULL;
}
