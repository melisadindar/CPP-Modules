#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat
{
    private:
        std::string const _name;
        size_t _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();
        void setGrade(int grade);
        int getGrade()const;
        std::string getName()const;
        void incrementGrade();
        void decrementGrade();
        Bureaucrat &operator=(const Bureaucrat &copy);
        Bureaucrat(const Bureaucrat &copy);

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw(){
                    return "Grade is too high, max value is 0!!";
                }
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw(){
                    return "Grade is too low, min value is 150!!";
                }
        };

        void signForm(Form &f);
};

std::ostream& operator<<(std::ostream &stream, const Bureaucrat &copy);



#endif