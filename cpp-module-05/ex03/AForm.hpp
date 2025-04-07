#ifndef AForm_HPP
# define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>
#include <string>
class Bureaucrat;

class AForm{
    private:
        std::string const _name;
        bool _signed;
        const int _requiredGradeToSign;
        const int _requiredGradeToExecute;
    public: 
        AForm();

        virtual ~AForm();
        AForm(const AForm &copy);
        AForm &operator=(const AForm& copy);
        std::string getName()const;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw(){
                    return "Grade is too high for AForm" ;
                }
        };

        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw(){
                    return "Grade is too low for AForm";
                }
        };

        AForm(std::string name, const int gradeExecute, const int gradeSign);
        bool getSigned()const;
        int getGradeExecute()const;
        int getGradeSign()const;
        bool beSigned(const Bureaucrat &b);

        virtual void specificExecute() const = 0;
        void execute(Bureaucrat const & executor)const;

        class FromNotSignedException : public std::exception{
           const char* what()const throw();
        };
};

std::ostream& operator<<(std::ostream &stream, const AForm &f);

#endif