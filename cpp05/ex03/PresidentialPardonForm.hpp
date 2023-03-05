
#include "AForm.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


class PresidentialPardonForm : public Form
{
private:
	std::string Target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string _target_);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
	~PresidentialPardonForm();

	std::string getTarget() const;
    void executeSafe() const;
};


#endif