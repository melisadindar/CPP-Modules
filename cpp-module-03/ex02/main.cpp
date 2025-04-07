#include "FragTrap.hpp"

int main()
{
    FragTrap F(" beste ");
    F.attack(" buse ");

    std::cout << F.getHitPoints() << std::endl;
    std::cout << F.getEnergyPoints() << std::endl;
    F.takeDamage(4);
    std::cout << F.getHitPoints() << std::endl;
    std::cout << F.getEnergyPoints() << std::endl;
    F.beRepaired(3);
    std::cout << F.getHitPoints() << std::endl;
    std::cout << F.getEnergyPoints() << std::endl;
    F.attack(" emine ");
    std::cout << F.getHitPoints() << std::endl;
    std::cout << F.getEnergyPoints() << std::endl;

    F.highFivesGuys();
}