#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unamed"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Constructeur check !";
}

ClapTrap::ClapTrap(const std::string& name) : _name("name"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Constructeur string check !";
}

ClapTrap::ClapTrap(const ClapTrap &copie) :  _name(copie._name), _hit(copie._hit), _energy(copie._energy), _attack(copie._attack)
{
	std::cout << "Constructeur copie check !";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit = other._hit;
		_attack = other._attack;
		_energy = other._energy;
		std::cout << "Constructeur operator check !";
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor check !"; 
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit > 0 && _energy > 0)
	{
		std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack << " point of damage !";
		_energy--;
	}
}

void ClapTrap::takeDamage(int amount)
{
	if (_hit > 0)
	{
		std::cout << "ClapTrap " << _name << " take " << amount << " Damage";
		_hit -= amount;
	}
	else ( std::cout << "ClapTrap " << _name << " is alredy dead !");
}

void ClapTrap::beRepaired(int amount)
{
	if (_hit > 0 && _energy > 0)
	{
		std::cout << "ClapTrap " << _name << " repair " << amount << " health point back !";
		_hit += amount;
	}
	else ( std::cout << "ClapTrap " << _name << " is alredy dead !");
}