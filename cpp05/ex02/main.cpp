#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
    try{
        ShrubberyCreationForm ausweis("Tree");
        PresidentialPardonForm sorry("Fedia");
        RobotomyRequestForm robobrain("Max");
        Bureaucrat plancton("Bob", 10);
        plancton.decreaseScoreBy(40);
        plancton.increaseScoreBy(45);
        ausweis.beSigned(plancton);
        ausweis.execute(plancton);
        sorry.beSigned(plancton);
        sorry.execute(plancton);
        plancton.signForm(robobrain);
        plancton.executeForm(robobrain);
    }
    catch(std::exception &e){
        std::cerr << e.what(); 
    }
}