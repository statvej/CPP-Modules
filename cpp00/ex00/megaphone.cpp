#include <iostream>
#include <string>

int main(int ac, char *av[]){
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        for (int i = 1; i < ac; i++)
        {
            std::string str(av[i]);
            for (size_t i = 0; i < str.length(); i++)
                std::cout << (char)std::toupper(str[i]);
        }
    }
    std::cout << "\n";
}
