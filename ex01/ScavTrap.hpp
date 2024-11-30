#ifndef SCAV_TRAP
#define SCAV_TRAP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"



class ScavTrap : public ClapTrap
{
	public:

	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();

	void attack(const std::string& target);
	void takeDamage(int amount);
	void beRepaired(int amount);
};

#endif
