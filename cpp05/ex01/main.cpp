#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    try{
        Form ausweis("ausweis", 50, 10);
        Bureaucrat plancton("Bob", 10);
        plancton.decreaseScoreBy(40);
        ausweis.beSigned(plancton);
        plancton.signForm(ausweis);
        std::cout << plancton << ausweis;
    }
    catch(std::exception &e){
        std::cerr << e.what(); 
    }
}