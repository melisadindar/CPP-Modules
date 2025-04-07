#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal()
{
    type =  "Wrong AAnimal";
    std::cout << "Wrong AAnimal default constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(std::string type): type(type)
{
    std::cout << "Wrong AAnimal constructor called for inits" << std::endl;
}

WrongAAnimal::~WrongAAnimal()
{
    std::cout << "Wrong AAnimal default destructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal& copy)
{
    *this = copy;
    std::cout << "Wrong AAnimal copy constructor called" << std::endl;
}

WrongAAnimal& WrongAAnimal::operator=(const WrongAAnimal& copy)
{
    this->type = copy.type;
    return *this;
}

void    WrongAAnimal::makeSound()const
{
    std::cout << " Wrong AAnimal sound..." << std::endl;
}

void    WrongAAnimal::setType(std::string newType)
{
    this->type = newType;
}

std::string WrongAAnimal::getType(void)const
{
    return this->type;
}