//
// Created by Fedir Staryk on 3/24/23.
//

#include "Date.hpp"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}


Date::Date() {

}

Date::~Date() {

}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

bool Date::operator==(const Date& rhs) const {
    return day == rhs.day &&
        month == rhs.month &&
        year == rhs.year;
}

bool Date::operator!=(const Date& rhs) const {
    return !(rhs == *this);
}

bool Date::operator<(const Date& rhs) const {
    if (year < rhs.year)
        return true;
    else if (year == rhs.year) {
        if (month < rhs.month)
            return true;
        else if (month == rhs.month) {
            if (day < rhs.day) {
                return true;
            }
            else
                return false;
        }
    }
    return false;
}

bool Date::operator>(const Date& rhs) const {
    return rhs < *this;
}

bool Date::operator<=(const Date& rhs) const {
    return !(rhs < *this);
}

bool Date::operator>=(const Date& rhs) const {
    return !(*this < rhs);
}

Date createDate(std::string str) {
    int day, month, year;
    year = stoi(str);
    size_t index = str.find('-');
    if (index != 4)
        throw Date::IncorectDateFormat();
    str = str.erase(0, 5);
    // std::cout << "string after cut " << str << "and index is " << index << std::endl;
    month = stoi(str);
    index = str.find('-');
    str = str.erase(0, 3);
    // std::cout << "string after cut " << str << "and index is " << index << std::endl<< std::endl;
    if (index != 2)
        throw Date::IncorectDateFormat();
    day = stoi(str);
    Date date(day, month, year);
    return date;
}

std::ostream& operator<<(std::ostream& o, Date date) {
    o << date.getYear() << "-" << date.getMonth() << "-" << date.getDay();
    return o;
}

bool Date::isValid(){
    if(day > 0 && month > 0 && year > 0 && day <= 31 && month <= 12)
        return true;
    else
        return false;
}
