#include "ClapTrap.hpp"

int main(){
    ClapTrap a(" Beste ");
    
    std::cout << a.getHitPoints() << std::endl;
    std::cout << a.getEnergyPoints() << std::endl;
    a.takeDamage(4);
    std::cout << a.getHitPoints() << std::endl;
    std::cout << a.getEnergyPoints() << std::endl;
    a.beRepaired(3);
    std::cout << a.getHitPoints() << std::endl;
    std::cout << a.getEnergyPoints() << std::endl;

    a.attack(" buse ");
    std::cout << a.getHitPoints() << std::endl;
    std::cout << a.getEnergyPoints() << std::endl;
    
    std::cout << std::endl;
    a.takeDamage(20);
    

    return 0;

}