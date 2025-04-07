#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
    std::cout << "ClapTrap Default constructor called for inits" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    (*this) = c;
    std::cout << "Copy constructor called" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap &c)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = c.getName();
    this->hitPoints = c.getHitPoints();
    this->energyPoints = c.getEnergyPoints();
    this->attackDamage = c.getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout << "Default destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "There is nothing to do with this points for attack" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->getName() << " attacks" << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints <= 0)
        return;
    if (this->hitPoints <= (int)amount)
    {
        std::cout << "ClapTrap " << this->getName() << " is died" << std::endl;
        this->hitPoints -= amount;
        return ;
    }
    std::cout << "ClapTrap " << this->getName() << " has take " << amount << " point of damage " << std::endl;
    this->hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "There is no energy or hit point for repaired." << std::endl;
        return ;
    }
    std::cout << "ClapTrap" << this->getName() << "repairs itself, getting " << amount << " hit points back." << std::endl;
    energyPoints--;
    hitPoints += amount;
}

void    ClapTrap::setName(std::string name)
{
    this->name = name;
}

std::string ClapTrap::getName()const
{
    return name;
}

void    ClapTrap::setHitPoints(int amount)
{
    this->hitPoints = amount;
}

void    ClapTrap::setEnergyPoints(int amount)
{
    this->energyPoints = amount;
}

void    ClapTrap::setAttackDamage(int amount)
{
    this->attackDamage = amount;
}

int ClapTrap::getHitPoints()const
{
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints()const
{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage()const
{
    return (this->attackDamage);
}
