#ifndef CLAP_TRAP
#define CLAP_TRAP

#include <iostream>
#include <string>

class ClapTrap 
{
	private:
	
	std::string _name;
	int _hit;
	int _energy;
	int _attack;

	public:

	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(int amount);
	void beRepaired(int amount);
};

#endif
