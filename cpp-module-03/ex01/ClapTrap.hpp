#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &c);
        ClapTrap& operator=(const ClapTrap &c);
        ~ClapTrap();

        void    setName(std::string name);
        std::string getName()const;
        void    setHitPoints(int amount);
        void    setEnergyPoints(int amount);
        void    setAttackDamage(int amount);
        int     getHitPoints()const;
        int     getEnergyPoints()const;
        int     getAttackDamage()const;

};

#endif