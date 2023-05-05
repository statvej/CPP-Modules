//
// Created by Fedir Staryk on 3/24/23.
//
#include "bitcoinExchange.hpp"
// #include "Date.hpp"
int main(int ac, char** av) {
    if (ac == 2)
    {
        try {

            BitcoinExchange exchange("data.csv");
            std::cout << exchange << std::endl;
            exchange.processInput(av[1]);
        }
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout << "Wrong number of arguments" << std::endl;
}