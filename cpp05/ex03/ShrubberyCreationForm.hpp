
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string Target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string _target_);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
	~ShrubberyCreationForm();

	std::string getTarget() const;
	void executeSafe() const;
};



#endif