#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    protected:
        std::string name;
        AMateria* inventory[4];
    public:
        Character(std::string name);
        virtual ~Character();
        Character(const Character &copy);
        Character &operator=(const Character &copy);
        virtual std::string const &getName() const;
        virtual void equip (AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter &target);
};

#endif