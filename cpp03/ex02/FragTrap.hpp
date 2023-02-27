#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    
public:
    FragTrap(std::string name_in);
    FragTrap();
    ~FragTrap();
    void attack(const std::string& target);
    void highFivesGuys(void);
};
