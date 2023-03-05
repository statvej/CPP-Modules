#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
    try{
        Intern hank;
        Form *sorry = hank.makeForm("presidential pardon", "Fedia");
        Form *ausweis = hank.makeForm("shrubbery creation", "NULL");
        Form *robobrain = hank.makeForm("robotomy request", "Max");
        Bureaucrat plancton("Bob", 10);
        plancton.decreaseScoreBy(40);
        plancton.increaseScoreBy(45);
        ausweis->beSigned(plancton);
        ausweis->execute(plancton);
        sorry->beSigned(plancton);
        sorry->execute(plancton);
        plancton.signForm(*robobrain);
        plancton.executeForm(*robobrain);
        delete sorry;
        delete ausweis;
        delete robobrain;
    }
    catch(std::exception &e){
        std::cerr << e.what(); 
    }
}