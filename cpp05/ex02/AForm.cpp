#include "AForm.hpp"

Form::Form(/* args */)
: FormName("no_name"), isSigned(false), signGrade(150), executeGrade(150)
{
}

Form::Form(std::string name, int _sign_grade_, int _execute_grade_)
: FormName(name), isSigned(false), signGrade(_sign_grade_), executeGrade(_execute_grade_)
{
    if(_sign_grade_ > 150 || _execute_grade_ > 150)
        throw Form::GradeTooLowException();
    if(_sign_grade_ < 1 || _execute_grade_ < 1)
        throw Form::GradeTooHighException();

}

Form::~Form()
{
}

Form::Form(Form const &other)
:   FormName(other.getFormName()), isSigned(false), signGrade(other.getSignGrade()), executeGrade(other.getExecuteGrade())
{
    if(other.getSignGrade() > 150 || other.getExecuteGrade() > 150)
        throw Form::GradeTooLowException();
    if(other.getSignGrade() < 1 || other.getExecuteGrade() < 1)
        throw Form::GradeTooHighException();
    *this = other;
}

Form &Form::operator=(Form const &other){
    this->isSigned = other.getIsSigned();
    return *this;
}

int Form::getSignGrade()const{
    return signGrade;
}

int Form::getExecuteGrade()const{
    return executeGrade;
}

std::string Form::getFormName()const{
    return FormName;
}

bool Form::getIsSigned()const{
    return isSigned;
}

std::ostream &operator<<(std::ostream &o, Form &f){
    o << f.getFormName() << "  with exec and sign grade : (" << f.getExecuteGrade() << ", " << f.getSignGrade() << ") and status is " << f.getIsSigned() << std::endl;
    return o;
}

void Form::beSigned(Bureaucrat bureaucrat){
    if(bureaucrat.getScore() > signGrade)
        throw Form::GradeTooLowException();
    else{
        isSigned = true;
        std::cout << "Form was signed\n";
    }
}

void Form::execute(Bureaucrat const& executor) const{
    if (executor.getScore() <= this->getExecuteGrade())
    {
        if (this->getIsSigned())
        {
            this->executeSafe();
        }
        else
        {
            throw Form::FormWasntSigned();
        }
    }
    else
        throw Form::GradeTooLowException();

}
