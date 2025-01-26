#ifndef FRAGTRAP
#define FRAGTRAP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public :

    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();

    void highFivesGuys(void);
};



#endif