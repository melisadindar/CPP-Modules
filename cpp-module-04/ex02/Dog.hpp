#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain* brain;
    public:
        Dog();
        virtual ~Dog();
        void    makeSound()const;
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        Brain *getBrain()const;
        
};

#endif