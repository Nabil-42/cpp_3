#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void printStatus(ClapTrap &clap) {
    std::cout << "ClapTrap " << clap.getName() << " - "
              << "Hit points: " << clap.getHitPoints() << ", "
              << "Energy points: " << clap.getEnergyPoints() << ", "
              << "Attack damage: " << clap.getAttackDamage() << std::endl;
}

int main() {
 std::cout << "---- Test de construction ----" << std::endl;
    FragTrap frag1("Fraggy");
    std::cout << std::endl;

    printStatus(frag1);

    std::cout << "---- Test de highFivesGuys ----" << std::endl;
    frag1.highFivesGuys();
    std::cout << std::endl;

    std::cout << "---- Test de la construction par copie ----" << std::endl;
    FragTrap frag2(frag1);
    std::cout << std::endl;

    std::cout << "---- Test de l'opérateur d'affectation ----" << std::endl;
    FragTrap frag3("Fraggy2");
    frag3 = frag1;
    std::cout << std::endl;

    std::cout << "---- Test de la destruction ----" << std::endl;
    return 0;
}
