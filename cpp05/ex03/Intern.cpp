#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form* Intern::createNewPresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

Form* Intern::createNewRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

Form* Intern::createNewShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

Form* Intern::makeForm(std::string name, std::string target) {
    std::cout << "pp";
    Form* (Intern:: * foo_list[])(std::string) = { &Intern::createNewPresidentialPardonForm, &Intern::createNewRobotomyRequestForm, &Intern::createNewShrubberyCreationForm };
    std::string foo_name_list[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
    for (int i = 0; i < 3; i++)
    {
        if (name == foo_name_list[i]){
            std::cout << "Intern creates " << name << std::endl;
            return (this->*foo_list[i])(target);
        }
    }
    throw Intern::FormNotFoundException();
    // return NULL;
}

