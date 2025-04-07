#include "Form.hpp"

Form::Form() : _name("Default"), _signed(0),  _requiredGradeToSign(150), _requiredGradeToExecute(150){
}

Form::~Form(){
}

Form::Form(const Form &copy) : _name("Default"), _requiredGradeToSign(150), _requiredGradeToExecute(150){
    *this = copy;
}

Form &Form::operator=(const Form& copy){
    this->_signed = copy._signed;
    return *this;
}

std::string Form::getName()const{
    return _name;
}

Form::Form(std::string name, const int gradeExecute, const int gradeSign) : _name(name), _requiredGradeToSign(gradeSign), _requiredGradeToExecute(gradeExecute){
    this->_signed = 0;
    if (gradeExecute < 1 || gradeSign < 1)
        throw GradeTooHighException();
    else if (gradeExecute > 150 || gradeSign > 150)
        throw GradeTooLowException();
}

bool Form::getSigned()const{
    if (_signed == false)
        return false;
    return true;
}

int Form::getGradeExecute()const{
    return _requiredGradeToExecute;
}

int Form::getGradeSign()const{
    return _requiredGradeToSign;
}


std::ostream& operator<<(std::ostream &stream,const Form &copy){
    stream << copy.getName() << ", requried grade to sign " << copy.getGradeSign() <<
    ", required grade to execute " << copy.getGradeExecute() << ", is signed " << (copy.getSigned() ? "true" : "false");
    return stream;
}
/* std::ostream& operator<<(std::ostream& o, const Form& f) {
    o << f.getName() << ", form grade " << f.getGradeSign() << ", form exec " << f.getGradeExecute() <<
            ", form sign :" << (f.getSigned() ? "true" : "false"); 
    return o;
}
 */
bool Form::beSigned(const Bureaucrat &b){
    if (b.getGrade() <= _requiredGradeToSign)//küçüktür olma sebebi 1in 2den daha yüksek not olması
        return (this->_signed= 1);
    else
        throw GradeTooLowException();
}