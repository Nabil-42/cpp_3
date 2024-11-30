#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unamed"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Constructeur check !" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap " << _name << "is constructed"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copie) :  _name(copie._name), _hit(copie._hit), _energy(copie._energy), _attack(copie._attack)
{
	std::cout << "Constructeur copie check !" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_attack = other._attack;
		_energy = other._energy;
		std::cout << "Constructeur operator check !" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor check !" << std::endl; 
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit > 0 && _energy > 0)
	{
		std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack << " point of damage !" << std::endl;
		_energy--;
	}
}

void ClapTrap::takeDamage(int amount)
{
	if (_hit > 0)
	{
		std::cout << "ClapTrap " << _name << " take " << amount << " Damage" << std::endl;
		_hit -= amount;
	}
	else ( std::cout << "ClapTrap " << _name << " is alredy dead !");
}

void ClapTrap::beRepaired(int amount)
{
	if (_hit > 0 && _energy > 0)
	{
		std::cout << "ClapTrap " << _name << " repair " << amount << " health point back !" << std::endl;
		_hit += amount;
	}
	else ( std::cout << "ClapTrap " << _name << " is alredy dead or out of mana!");
}