#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(0),  _requiredGradeToSign(150), _requiredGradeToExecute(150){
}

AForm::~AForm(){
}

AForm::AForm(const AForm &copy) : _name("Default"), _requiredGradeToSign(150), _requiredGradeToExecute(150){
    *this = copy;
}

AForm &AForm::operator=(const AForm& copy){
    this->_signed = copy._signed;
    return *this;
}

std::string AForm::getName()const{
    return _name;
}

AForm::AForm(std::string name, const int gradeExecute, const int gradeSign) : _name(name), _requiredGradeToSign(gradeSign), _requiredGradeToExecute(gradeExecute){
    this->_signed = 0;
    if (gradeExecute < 1 || gradeSign < 1)
        throw GradeTooHighException();
    else if (gradeExecute > 150 || gradeSign > 150)
        throw GradeTooLowException();
}

bool AForm::getSigned()const{
    if (_signed == false)
        return false;
    return true;
}

int AForm::getGradeExecute()const{
    return _requiredGradeToExecute;
}

int AForm::getGradeSign()const{
    return _requiredGradeToSign;
}


/* std::ostream& operator<<(std::ostream &stream,const AForm &copy){
    stream << copy.getName() << ", requried grade to sign " << copy.getGradeSign() <<
    ", required grade to execute " << copy.getGradeExecute() << ", is signed " << copy.getSigned();
    return stream;
} */
std::ostream& operator<<(std::ostream& o, const AForm& f) {
    o << f.getName() << ", AForm grade " << f.getGradeSign() << ", AForm exec " << f.getGradeExecute() <<
            ", AForm sign :" << (f.getSigned() ? "true" : "false"); 
    return o;
}

bool AForm::beSigned(const Bureaucrat &b){
    if (b.getGrade() <= _requiredGradeToSign)//küçüktür olma sebebi 1in 2den daha yüksek not olması
        return (this->_signed= 1);
    else
        throw GradeTooLowException();
}

const char* AForm::FromNotSignedException::what()const throw(){
    return "AForm: Form not signed!";
}

void AForm::execute(Bureaucrat const & executor)const{
    if (_signed == 0)//!olabilir
        throw FromNotSignedException();
    if (executor.getGrade() >= this->getGradeExecute())
        throw GradeTooLowException();
    specificExecute();
}