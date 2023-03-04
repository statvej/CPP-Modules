#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", 72, 45), Target("default target")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target_)
    :Form("RobotomyRequestForm", 72, 45), Target(_target_)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other)
    : Target(other.getTarget())
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& other) {
    this->Target = other.getTarget();
    return *this;
}

std::string RobotomyRequestForm::getTarget()const { return Target; }

void RobotomyRequestForm::executeSafe() const{
    std::time_t timeStamp = std::time(NULL);
    if (timeStamp % 2)
        std::cout << Target << " has been robotomized\n";
    else
        std::cout << "Robotomy on " << Target << " has failed\n";
}




