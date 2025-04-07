#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), target("Default"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon", 25 ,5), target(target){

}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm("Presidential Pardon", 25, 5){
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){
    this->target = copy.target;
    return *this;
}

void PresidentialPardonForm::specificExecute()const{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}