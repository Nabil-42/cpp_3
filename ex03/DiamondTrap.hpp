#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap 
{
    private:
    std::string _name;

    public : 
    DiamondTrap();
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap &copie);
    DiamondTrap& operator=(const DiamondTrap &other);
    ~DiamondTrap();

    void whoAmI();
};

#endif