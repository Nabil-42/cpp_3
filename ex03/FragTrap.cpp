#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _name = "Unamed";
    _energy = 100;
    _attack = 30;
    std::cout << "Constructeur FragTrap check !" << std::endl;

}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _name = name;
    _energy = 100;
    _attack = 30;
	std::cout << "FragTrap " << _name << " is constructed"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& copie) : ClapTrap(copie)
{
    	std::cout << "Constructeur copie FragTrap check !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "Constructeur operator FragpTrap check !" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap check !" << std::endl; 
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hey, give me a high five !" << std::endl;
}