#pragma once

#include <iostream>
#include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        void    makeSound()const;
        WrongCat(const WrongCat& copy);
        WrongCat& operator=(const WrongCat& copy);
};