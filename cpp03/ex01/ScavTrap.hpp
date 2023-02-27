#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    
public:
    ScavTrap(std::string name_in);
    ScavTrap();
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};
