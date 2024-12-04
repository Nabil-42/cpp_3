#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printStatus(ClapTrap &clap) {
    std::cout << "ClapTrap " << clap.getName() << " - "
              << "Hit points: " << clap.getHitPoints() << ", "
              << "Energy points: " << clap.getEnergyPoints() << ", "
              << "Attack damage: " << clap.getAttackDamage() << std::endl;
}

int main() {
    ClapTrap clap1("Clappy");
    ScavTrap clap2("Trapster");

    std::cout << "\n--- Début du combat ---\n" << std::endl;
    
    printStatus(clap1);
    printStatus(clap2);

    clap1.attack("Trapster");
    clap2.takeDamage(5);
    std::cout << "Après attaque de Clappy: " << std::endl;
    printStatus(clap1);
    printStatus(clap2);

    clap2.beRepaired(3);
    std::cout << "Après réparation de Trapster: " << std::endl;
    printStatus(clap2);

    clap1.attack("Trapster");
    clap2.takeDamage(4);
    std::cout << "Après deuxième attaque de Clappy: " << std::endl;
    printStatus(clap1);
    printStatus(clap2);

    clap2.attack("Clappy");
    clap1.takeDamage(2);
    std::cout << "Après attaque de Trapster: " << std::endl;
    printStatus(clap1);
    printStatus(clap2);

    for (int i = 0; i < 8; ++i) {
        clap1.attack("Trapster");
    }
    std::cout << "Après avoir épuisé l'énergie de Clappy: " << std::endl;
    printStatus(clap1);
    printStatus(clap2);

    clap1.beRepaired(5);
    std::cout << "Après tentative de réparation de Clappy (énergie épuisée): " << std::endl;
    printStatus(clap1);

    clap2.guardGate();
    std::cout << "Après activation de GuardGate: " << std::endl;
    printStatus(clap2);

    std::cout << "\n--- Fin du combat ---\n" << std::endl;

    return 0;
}
