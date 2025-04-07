#include "Zombie.hpp"

Zombie::Zombie(const std::string& name)//const sebebi: name parametresinin yapıcı metot içinde değiştirliemeyeciğini belirtir.
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << " Zombie down!!!!" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}