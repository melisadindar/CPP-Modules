#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure"){
}

Cure::~Cure(){}

Cure::Cure(const Cure &copy) : AMateria(copy){
    *this = copy;
}

Cure &Cure::operator=(const Cure &copy){
    this->type = copy.getType();
    return *this;
}

void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure *Cure::clone() const{
    std::cout << "clone called" << std::endl;
    Cure *data = new Cure;
    return data;
}