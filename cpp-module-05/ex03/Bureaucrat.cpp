#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150){
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade){
}

Bureaucrat::~Bureaucrat(){
}

void Bureaucrat::setGrade(int grade){
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;

}

int Bureaucrat::getGrade()const{
   return _grade;
}

std::string Bureaucrat::getName() const{
    return _name;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){
    if (this == &copy)
        return *this;
    _grade = copy._grade;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
    *this = copy;
}

void Bureaucrat::incrementGrade(){
    setGrade(this->_grade - 1);
}

void Bureaucrat::decrementGrade(){
    setGrade(this->_grade + 1);
}


std::ostream& operator<<(std::ostream &stream, const Bureaucrat &copy)
{
    stream << copy.getName() << ", Bureaucrat Grade " << copy.getGrade();
	return stream;
}

void Bureaucrat::signAForm(AForm &f){
    try{
        if (f.beSigned(*this)){
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
        }
    }
    catch (std::exception &e){
        std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form){
    try{
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }

    catch (const std::exception &e){
        std::cerr << this->getName() << " couldn't execute because " << e.what() << std::endl; 
    }
}