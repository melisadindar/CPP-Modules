#include "Zombie.hpp"

int main()
{
    Zombie zombie1("beste");
    zombie1.announce();
    std::cout << "Zombie beste created for stack." << std::endl;

    Zombie* zombie2;
    zombie2 = newZombie("Buse");
    zombie2->announce();
    std::cout << "Zombie Buse created for heap" << std::endl;

    randomChump("Emine");
    delete(zombie2);

}