#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice"){
}

Ice::~Ice(){
}

Ice::Ice(const Ice &copy) : AMateria(copy){
    *this = copy;
}

Ice &Ice::operator=(const Ice &copy){
    this->type = copy.getType();
    return *this;
}

void    Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice *Ice::clone()const{
    std::cout << "clone called" << std::endl;
    Ice *data = new Ice;
    return data;
}