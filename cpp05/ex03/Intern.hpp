
#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:

public:
	Intern();
	~Intern();

	Form* makeForm(std::string name, std::string target);
	Form* createNewPresidentialPardonForm(std::string target);
	Form* createNewRobotomyRequestForm(std::string target);
	Form* createNewShrubberyCreationForm(std::string target);
	class FormNotFoundException: public std::exception
	{
	public:
		const char* what() const throw ()
		{
			return "Intern couldn't find your desired form. Don't blame him, it's his first day on the job\n";
		}
	};
};



#endif