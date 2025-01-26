#ifndef CLAP_TRAP
#define CLAP_TRAP

#include <iostream>
#include <string>

class ClapTrap 
{
	protected:
	
	std::string _name;
	int _hit;
	int _energy;
	int _attack;

	public:

	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	virtual ~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(int amount);
	void beRepaired(int amount);

	const std::string& getName() const { return _name; }
    int getHitPoints() const { return _hit; }
    int getEnergyPoints() const { return _energy; }
    int getAttackDamage() const { return _attack; }

    void setName(const std::string& name) { _name = name; }
    void setHitPoints(int hitPoints) { _hit = hitPoints; }
    void setEnergyPoints(int energyPoints) { _energy = energyPoints; }
    void setAttackDamage(int attackDamage) { _attack = attackDamage; }
};

#endif
