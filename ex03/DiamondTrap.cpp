#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unamed" + "_clap_name"), ScavpTrap(), FragpTrap()
{
    _name = "Unamed";
    _hit = FragpTrap._hit;
    _energy = ScavpTrap._energy;
    _attack = FragpTrap._attack;
    std::cout << "DiamondTrap constructed check !" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavpTrap(), FragpTrap()
{
    _name = "name";
    _hit = FragpTrap._hit;
    _energy = ScavpTrap._energy;
    _attack = FragpTrap._attack;
    std::cout << "DiamondTrap constructed check !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copie) : ClapTrap()