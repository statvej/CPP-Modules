
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, virtual public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap(std::string inname);
    DiamondTrap();
    ~DiamondTrap();

    void whoAmI();
    using ScavTrap::attack;
};

#endif