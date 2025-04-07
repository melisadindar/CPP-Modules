#include "ScavTrap.hpp"

int main()
{
    ScavTrap S(" beste ");
    S.attack(" buse ");

    std::cout << S.getHitPoints() << std::endl;
    std::cout << S.getEnergyPoints() << std::endl;
    S.takeDamage(4);
    std::cout << S.getHitPoints() << std::endl;
    std::cout << S.getEnergyPoints() << std::endl;
    S.beRepaired(3);
    std::cout << S.getHitPoints() << std::endl;
    std::cout << S.getEnergyPoints() << std::endl;
    S.attack(" emine ");
    std::cout << S.getHitPoints() << std::endl;
    std::cout << S.getEnergyPoints() << std::endl;

    S.guardGate();
}