#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type =  "Wrong Animal";
    std::cout << "Wrong Animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
    std::cout << "Wrong Animal constructor called for inits" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    *this = copy;
    std::cout << "Wrong Animal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    this->type = copy.type;
    return *this;
}

void    WrongAnimal::makeSound()const
{
    std::cout << " Wrong Animal sound..." << std::endl;
}

void    WrongAnimal::setType(std::string newType)
{
    this->type = newType;
}

std::string WrongAnimal::getType(void)const
{
    return this->type;
}