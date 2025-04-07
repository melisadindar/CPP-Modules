#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for(int i = 0; i<100; i++)
        ideas[i] = "random ideas";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl; 
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
    std::cout << "Brain operator assignment called" << std::endl;
    for (size_t i = 0; i < copy.ideas->size(); i++){
        this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}