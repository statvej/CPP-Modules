#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat plancton;
        plancton.decreaseScoreBy(40);
        std::cout << plancton;
    }
    catch(std::exception &e){
        std::cerr << e.what(); 
    }
}