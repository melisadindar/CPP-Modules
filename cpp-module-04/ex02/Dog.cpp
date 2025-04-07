#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    AAnimal::type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void    Dog::makeSound()const
{
    std::cout << this->type << " Bark Bark" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    //*this = copy;
    this->brain = new Brain(*copy.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    AAnimal::type = copy.type;
    this->brain = new Brain(*copy.brain);//deep copy brain
    return *this;
}

Brain *Dog::getBrain()const
{
    return this->brain;
}