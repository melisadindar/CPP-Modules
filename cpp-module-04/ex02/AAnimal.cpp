#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal constructor called for inits" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
    *this = copy;
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    this->type = copy.getType();
    return *this;
}

void    AAnimal::setType(std::string newType)
{
    this->type = newType;
}

std::string AAnimal::getType(void)const
{
    return this->type;
}
