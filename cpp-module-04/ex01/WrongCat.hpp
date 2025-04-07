#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        void    makeSound()const;
        WrongCat(const WrongCat& copy);
        WrongCat& operator=(const WrongCat& copy);
};