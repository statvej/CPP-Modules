#include "Character.hpp"


Character::Character()
    : usedInventorySlots(0)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string name)
    : CharacterName(name), usedInventorySlots(0)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character& other)
{
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    this->usedInventorySlots = 0;
    this->CharacterName = other.getName();
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        this->inventory[i] = other.inventory[i];
        if (other.inventory[i])
            this->usedInventorySlots++;
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < usedInventorySlots; i++)
        delete inventory[i];
}

std::string const& Character::getName() const {
    return CharacterName;
}

void Character::equip(AMateria* m) {
    if (usedInventorySlots < 4 && usedInventorySlots >= 0)
    {
        std::cout << "Equiped " << m->getType() << " in slot " << usedInventorySlots << std::endl;
        inventory[usedInventorySlots] = m;
        usedInventorySlots++;
    }
}

void Character::unequip(int idx) {
    if (idx < usedInventorySlots && idx >= 0 && inventory[idx])
    {
        idx++;
		while (idx < usedInventorySlots)
		{
			inventory[idx - 1] = inventory[idx];
			idx++;
		}
		usedInventorySlots--;
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx < usedInventorySlots && idx >= 0 && inventory[idx])
        inventory[idx]->use(target);
}
