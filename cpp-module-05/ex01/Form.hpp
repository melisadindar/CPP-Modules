#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>
class Bureaucrat;

class Form{
    private:
        std::string const _name;
        bool _signed;
        const int _requiredGradeToSign;
        const int _requiredGradeToExecute;
    public: 
        Form();

        ~Form();
        Form(const Form &copy);
        Form &operator=(const Form& copy);
        std::string getName()const;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw(){
                    return "Grade is too high for Form" ;
                }
        };

        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw(){
                    return "Grade is too low for Form";
                }
        };

        Form(std::string name, const int gradeExecute, const int gradeSign);
        bool getSigned()const;
        int getGradeExecute()const;
        int getGradeSign()const;
        bool beSigned(const Bureaucrat &b);
};

std::ostream& operator<<(std::ostream &stream, const Form &f);

#endif