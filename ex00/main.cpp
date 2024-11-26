#include <iostream>
#include "ClapTrap.hpp"

int main() {
    // Création de deux ClapTraps
    ClapTrap clap1("Clappy");
    ClapTrap clap2("Trapster");

    // Affichage initial des actions
    std::cout << "\n--- Début du combat ---\n" << std::endl;

    // Clap1 attaque Clap2
    clap1.attack("Trapster");
    clap2.takeDamage(5); // Clap2 perd 5 points de vie

    // Clap2 se répare
    clap2.beRepaired(3);

    // Clap1 attaque encore Clap2
    clap1.attack("Trapster");
    clap2.takeDamage(4);

    // Clap2 attaque Clap1
    clap2.attack("Clappy");
    clap1.takeDamage(2);

    // Réduction d'énergie
    for (int i = 0; i < 8; ++i) {
        clap1.attack("Trapster"); // Clap1 attaque jusqu'à épuiser son énergie
    }

    // Réparations avec énergie épuisée
    clap1.beRepaired(5);

    std::cout << "\n--- Fin du combat ---\n" << std::endl;

    return 0;
}
