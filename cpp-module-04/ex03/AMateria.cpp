#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(){
}

AMateria::~AMateria(){
}

AMateria::AMateria(std::string const &type) : type(type){
}

std::string const &AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter &target){
    std::cout << "AMateria used on " << target.getName() << std::endl;
}

AMateria::AMateria(const AMateria &copy){
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy){
    this->type = copy.getType();
    return *this;
}
