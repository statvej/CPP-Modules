#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
:   Form("PresidentialPardonForm", 25, 5), Target("default target")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target_)
:Form("PresidentialPardonForm", 25, 5), Target(_target_)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
:   Target(other.getTarget())
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
	this->Target = other.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget()const{return Target;}

void PresidentialPardonForm::executeSafe()const{
    std::cout << Target << " has been pardoned by Zaphod Beeblebrox.\n";
}




