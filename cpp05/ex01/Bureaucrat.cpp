
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _score)
    : name(_name)
{
    if (_score < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_score > 150)
        throw Bureaucrat::GradeTooLowException();
    score = _score;
}

Bureaucrat::Bureaucrat()
    : name("no_name")
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (other.getScore() < 1)
        throw Bureaucrat::GradeTooHighException();
    if (other.getScore() > 150)
        throw Bureaucrat::GradeTooLowException();
    this->score = other.getScore();
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : name(other.getName())
{
    if (other.getScore() < 1)
        throw Bureaucrat::GradeTooHighException();
    if (other.getScore() > 150)
        throw Bureaucrat::GradeTooLowException();
    this->score = other.getScore();
}


void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getFormName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->name << " couldn’t sign " << form.getFormName() << "because" << e.what() << std::endl;
	}
}

int Bureaucrat::getScore() const
{
    return this->score;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}


void Bureaucrat::increaseScoreBy(int amount)
{
    score -= amount;
    if (score < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseScoreBy(int amount)
{
    score += amount;
    if (score > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementScore() {
    score--;
    if (score < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementScore() {
    score++;
    if (score > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << " the bureaucrat has a score of " << b.getScore() << ".\n";
	return(o);
}
