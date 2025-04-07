#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    Animal::type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
}

void    Dog::makeSound()const
{
    std::cout << this->type << " Bark Bark" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
    Animal::type = copy.type;
    return *this;
}