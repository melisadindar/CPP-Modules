#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : name(name){
    std::cout << "Character created " << name << std::endl;
    for (int i = 0; i < 4; i++){
        this->inventory[i] = 0;
    }
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (this->inventory[i])
            delete this->inventory[i];
    }
    std::cout << "Character destucted " << name << std::endl;
}

Character::Character(const Character &copy){
    *this = copy;
}

Character &Character::operator=(const Character &copy){
    this->name = copy.getName();
    for (int i = 0; i < 4; i++){
        if (copy.inventory[i] == 0)
            this->inventory[i] = copy.inventory[i];
        else
            this->inventory[i] = copy.inventory[i]->clone();
    }
    return *this;
}

std::string const & Character::getName() const {
    return this->name;
}

void Character::equip(AMateria *m){
    int i = 0;
    if (!m){
        std::cout << "Materia is empty" << std::endl;
        return ;
    }
    while (this->inventory[i] != 0){
        i++;
    }
    if (i > 3){
        std::cout << "Not enough space for Materia" << std::endl;
        return ;
    }
    std::cout << this->getName() << " equip the " << m->getType() << " at slot " << i << std::endl;
    this->inventory[i] = m;
}

void Character::unequip(int idx){
    if (idx < 0 || idx > 3){
        std::cout << "Index out of the range" << std::endl;
        return ;
    }
    if (this->inventory[idx] == 0){
        std::cout << "There is no Materia to unequip" << std::endl;
        return ;
    }
    std::cout << this->getName() << " unequip the " << this->inventory[idx]->getType() << " at slot " << idx << std::endl;
}

void Character::use(int idx, ICharacter &target){
    if (idx < 0 || idx > 3){
        std::cout << "Index out of the range" << std::endl;
        return ;
    }
    if (!this->inventory[idx]){
        std::cout << "Nothing found the use" << std::endl;
        return ;
    }
    this->inventory[idx]->use(target);
}