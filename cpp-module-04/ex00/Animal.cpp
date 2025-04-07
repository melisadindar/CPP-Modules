#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor called for inits" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
    *this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
    this->type = copy.getType();
    return *this;
}

void    Animal::setType(std::string newType)
{
    this->type = newType;
}

std::string Animal::getType(void)const
{
    return this->type;
}

void Animal::makeSound()const
{
    std::cout << "Animal sound..." << std::endl;
}