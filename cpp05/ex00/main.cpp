#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat plancton("Bob", 100);
        plancton.decreaseScoreBy(40);
        std::cout << plancton;
    }
    catch(std::exception &e){
        std::cerr << e.what(); 
    }
}