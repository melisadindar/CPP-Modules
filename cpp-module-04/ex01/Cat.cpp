#include "Cat.hpp"

Cat::Cat()
{
    Animal::type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat& copy)
{
    //*this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    Animal::operator=(copy);//Animaldan miras aldığı için önce miras aldığı fonk. çağrılır ve veriler güncellenir(altta).
    delete this->brain;//(geçmiş veriler silinir bnc)
    this->brain = new Brain(*copy.brain);//deep copy brain
    return *this;
}

void Cat::makeSound()const
{
    std::cout << this->getType() << " meow meow" << std::endl;
}

Brain *Cat::getBrain()const
{
    return this->brain;
}