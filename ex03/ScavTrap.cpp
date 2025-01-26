#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_name = "Unamed"; 
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "Constructeur ScavTrap check !" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_name = name; 
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap " << _name << " is constructed"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copie) : ClapTrap(copie)
{
	std::cout << "Constructeur copie ScavTrap check !" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "Constructeur operator ScavpTrap check !" << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap check !" << std::endl; 
}

void ScavTrap::attack(const std::string& target)
{
	if (_hit > 0 && _energy > 0)
	{
		std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attack << " point of damage !" << std::endl;
		_energy--;
	}
}

void ScavTrap::takeDamage(int amount)
{
	if (_hit > 0)
	{
		std::cout << "ScavTrap " << _name << " take " << amount << " Damage" << std::endl;
		_hit -= amount;
	}
	else ( std::cout << "ScavTrap " << _name << " is alredy dead !");
}

void ScavTrap::beRepaired(int amount)
{
	if (_hit > 0 && _energy > 0)
	{
		std::cout << "ScavTrap " << _name << " repair " << amount << " health point back !" << std::endl;
		_hit += amount;
	}
	else ( std::cout << "ScavTrap " << _name << " is alredy dead or out of mana!" << std::endl);
}

void ScavTrap::guardGate()
{
	std::cout << _name << " is now in Gate keeper mode" << std::endl;
}