#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

void printStatus(ClapTrap &clap) {
    std::cout << "ClapTrap " << clap.getName() << " - "
              << "Hit points: " << clap.getHitPoints() << ", "
              << "Energy points: " << clap.getEnergyPoints() << ", "
              << "Attack damage: " << clap.getAttackDamage() << std::endl;
}

int main() {
 std::cout << "===== Test DiamondTrap =====" << std::endl;

    // Création d'un DiamondTrap
    DiamondTrap diamond("Diamondy");

    // Vérification des valeurs initiales
    diamond.whoAmI(); // Affiche le nom du DiamondTrap et le nom de ClapTrap
    std::cout << std::endl;

    // Test des valeurs héritées
    std::cout << "Hit points (FragTrap): " << diamond.getHitPoints() << std::endl;
    std::cout << "Energy points (ScavTrap): " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack damage (FragTrap): " << diamond.getAttackDamage() << std::endl;
    std::cout << std::endl;

    // Utilisation de la fonction attack() héritée de ScavTrap
    diamond.attack("TargetDummy");
    std::cout << std::endl;

    // Simulation d'un combat
    diamond.takeDamage(30); // Réduction des points de vie
    diamond.beRepaired(20); // Réparation
    std::cout << "Hit points after damage and repair: " << diamond.getHitPoints() << std::endl;
    std::cout << std::endl;

    // Création d'une copie pour tester le constructeur de copie
    std::cout << "===== Copy Constructor Test =====" << std::endl;
    DiamondTrap diamondCopy(diamond);
    diamondCopy.whoAmI();

    // Modifications sur la copie
    diamondCopy.attack("AnotherDummy");
    diamondCopy.takeDamage(50);
    std::cout << "Copy's hit points after taking damage: " << diamondCopy.getHitPoints() << std::endl;

    std::cout << std::endl << "===== Test Completed =====" << std::endl;
    return 0;
}
