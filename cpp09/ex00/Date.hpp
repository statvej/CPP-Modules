//
// Created by Fedir Staryk on 3/24/23.
//

#ifndef IRC_DATE_H
#define IRC_DATE_H

#include <string>
#include <stdlib.h>
#include <exception>
#include <ostream>
#include <iostream>
class Date {
    int day;
    int month;
    int year;

public:
    Date();
    ~Date();

    Date(int day, int month, int year);

    int getDay() const;

    void setDay(int day);
    int getMonth() const;


    void setMonth(int month);

    int getYear() const;

    void setYear(int year);

    bool operator==(const Date& rhs) const;

    bool operator!=(const Date& rhs) const;

    bool operator<(const Date& rhs) const;

    bool operator>(const Date& rhs) const;

    bool operator<=(const Date& rhs) const;

    bool operator>=(const Date& rhs) const;


    class IncorectDateFormat : public std::exception
    {
    public:
        const char* what() const throw ()
        {
            return "Date format is unreadable";
        }
    };

    bool isValid();
};
Date createDate(std::string str);

std::ostream& operator<<(std::ostream& o, Date date);
#endif //IRC_DATE_H
