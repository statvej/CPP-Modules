
#include "AForm.hpp"
#include <ctime>
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public Form
{
private:
	std::string Target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string _target_);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	~RobotomyRequestForm();

	std::string getTarget() const;
    void executeSafe() const;
};


#endif