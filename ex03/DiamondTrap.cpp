#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(std::string("Unamed") + "_clap_name"), ScavTrap("Unamed"), FragTrap("Unamed")
{
    _name = "Unamed";
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "DiamondTrap constructed check !" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    _name = name;
     ClapTrap::_name = name + "_clap_name";
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "DiamondTrap constructed check !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copie) : ClapTrap(copie), ScavTrap(copie), FragTrap(copie)
{
     std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    	std::cout << "Destructor DiamondTrap check !" << std::endl; 
}

void DiamondTrap::whoAmI()
{
    std::cout << "My Clap Trap origin name is: " << ClapTrap::_name << std::endl;
    std::cout << "My Diamnond Trap Name is: " << DiamondTrap::_name << std::endl;
}