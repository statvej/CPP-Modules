#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
class FragTrap : virtual public ClapTrap
{
private:
    
public:
    FragTrap(std::string name_in);
    FragTrap();
    ~FragTrap();
    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif