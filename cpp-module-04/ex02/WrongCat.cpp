#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAAnimal()
{   
    type = "Wrong Cat";
    std::cout << "Wrong Cat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor called" << std::endl;
}

void    WrongCat::makeSound()const
{
    std::cout << "Wrong Cat sound..." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAAnimal(copy)
{
    std::cout << "Wrong Cat copy constructor called";
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    this->type = copy.type;
    return *this;
}
