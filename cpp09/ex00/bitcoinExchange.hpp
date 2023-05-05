//
// Created by Fedir Staryk on 3/25/23.
//

#ifndef CPP_BITCOINEXCHANGE_HPP
#define CPP_BITCOINEXCHANGE_HPP

#include <ostream>
#include <fstream>
#include <map>
#include "Date.hpp"
class Date;
class BitcoinExchange {
public:
    std::map <Date, double> bitcoinDB;
    int display();
    BitcoinExchange(std::string file);
    ~BitcoinExchange();
    void processInput(std::string in_file);
    void findPrice(double amount, Date time);

};

std::ostream& operator<<(std::ostream& os, const BitcoinExchange& be);

#endif //CPP_BITCOINEXCHANGE_HPP
