//
// Created by Fedir Staryk on 3/25/23.
//

#include "bitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string db_file) {
    std::fstream file(db_file);
    if (file.fail())
        throw std::out_of_range("failed to open a file");
    std::string buf;
    Date tempDate;
    while (getline(file, buf)) {
        if (buf != "date,exchange_rate") {
            size_t comaPos = buf.find(',');
            tempDate = createDate(buf);
            bitcoinDB.insert(std::make_pair(tempDate, stof(buf.substr(comaPos + 1, buf.length()))));
        }
    }

}


BitcoinExchange::~BitcoinExchange() {

}

std::ostream& operator<<(std::ostream& os, const BitcoinExchange& be) {
    os << "BitcoinExchange database:\n";
    std::map<Date, double>::const_iterator it;
    for (it = be.bitcoinDB.begin(); it != be.bitcoinDB.end(); ++it) {
        os << it->first << " : " << it->second << '\n';
    }
    return os;
}

void printResult(double value, double amount, Date time) {
    std::cout << time << " => " << amount << " = " << value << std::endl;
}

void BitcoinExchange::findPrice(double amount, Date time) {
    for (std::map<Date, double>::iterator it = bitcoinDB.begin(); it != bitcoinDB.end(); it++)
    {
        if (it->first == time)
            return printResult(it->second * amount, amount, time);
        if (it->first > time)
            return printResult((--it)->second * amount, amount, time);
    }
}

void BitcoinExchange::processInput(std::string in_file) {
    std::fstream file(in_file);
    if (file.fail())
        throw std::out_of_range("failed to open a file");
    std::string buf;
    Date tempDate;
    double amount;
    while (getline(file, buf)) {
        if (buf != "date | value") {
            tempDate = createDate(buf);
            if(!tempDate.isValid())
            {
                std::cout << "Error: bad input => " << tempDate << std::endl;
                continue;
            }
            size_t pipePos = buf.rfind(' ') + 1;
            amount = stof(buf.substr(pipePos, buf.length()));
            if (amount <= 0)
            {
                std::cout << "Error: not a positive number." << std::endl;
                continue;
            }
            else if(amount > 1000)
            {
                std::cout << "Error: too large a number." << std::endl;
                continue;
            }
            findPrice(amount, tempDate);
        }
    }
}

