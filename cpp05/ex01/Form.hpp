
#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string FormName;
    bool isSigned;
    const int signGrade;
    const int executeGrade;
public:
    Form(/* args */);
    ~Form();
    Form(std::string name, int _sign_grade_, int _execute_grade_);
    Form(Form const &other);
    Form &operator=(Form const &other);

    int getSignGrade()const;
    int getExecuteGrade()const;
    std::string getFormName()const;
    bool getIsSigned()const; 
    void beSigned(Bureaucrat bureaucrat);
    class GradeTooHighException : public std::exception
    {
        public :
            const char * what() const throw ()
            {
                return "Grade is too high";
            }
    };

    class GradeTooLowException : public std::exception
    {
        public :
            const char * what() const throw ()
            {
                return "Grade is too low";
            }
    };
};

std::ostream &operator<<(std::ostream &o, Form &f);

#endif