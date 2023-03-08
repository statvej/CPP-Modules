#include "ScalarConverter.hpp"

int main(int ac, char **av){
    if(ac != 2)
        return -1;
    ScalarConverter conv(av[1]);
    conv.display();
}
