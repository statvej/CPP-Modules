
#ifndef Character_HPP
# define Character_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
private:
    std::string CharacterName;
    AMateria* inventory[4];
    int usedInventorySlots;
public:
    Character();
    Character(std::string name);
    Character(const Character& other);

    Character& operator=(const Character& other);

    ~Character();

    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};


#endif