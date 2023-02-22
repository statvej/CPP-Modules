#include "Harl.hpp"

int main(int ac, char **av){
    Harl cry_baby;

    if(ac == 2){
        cry_baby.complain(av[1]);
    }
    else
        std::cerr<<"Not enough arguments\n";
}