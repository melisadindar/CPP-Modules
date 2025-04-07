#include "Cat.hpp"

Cat::Cat() : Animal()
{
    Animal::type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
    Animal::type = copy.type;
    return *this;
}

void Cat::makeSound()const
{
    std::cout << this->getType() << " meow meow" << std::endl;
}