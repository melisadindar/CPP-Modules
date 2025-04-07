#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &copy);
        void use(ICharacter &target);
        Cure* clone() const;
};

#endif