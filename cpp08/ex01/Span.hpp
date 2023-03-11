#include <stdlib.h>
#include <exception>
#include <iostream>
#include <vector>
#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
private:
    std::vector<int> Array;
    size_t maxSize;
public:
    Span(/* args */);
    Span(size_t size);
    Span(Span const&);
    Span& operator=(Span const&);
    ~Span();

    std::vector<int> getSpan(void) const;
    void print();
    void addNumber(int);
    int shortestSpan();
    int longestSpan();
    void    add_many_more(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

Span::Span(/* args */)
    : maxSize(0)
{
}

Span::Span(size_t size)
    : maxSize(size)
{
}

Span::~Span()
{
    Array.clear();
}

Span::Span(Span const& other) {
    *this = other;
}

Span& Span::operator=(Span const& other) {
    if (other.maxSize != 0)
    {
        this->Array.clear();
        this->maxSize = other.maxSize;
        this->Array = other.Array;
    }
    return *this;
}

std::vector<int> Span::getSpan(void) const
{
	return(this->Array);
}

void Span::addNumber(int number) {
    if (Array.size() < maxSize)
        Array.push_back(number);
    else
        throw std::out_of_range("you cant add more numbers");
}

void Span::print() {
    for (size_t i = 0; i < Array.size(); i++) {
        std::cout << Array[i] << std::endl;
    }
}

int Span::shortestSpan() {
    if (Array.size() <= 1)
        throw std::out_of_range("Not enough numbers for this operation");
    int shortestSpan = INT_MAX;
    for (size_t i = 0; i < Array.size() - 1; i++)
    {
        for (size_t j = 1; j < Array.size(); j++)
        {
            if (shortestSpan > abs(Array[i] - Array[j]) && i != j)
                shortestSpan = abs(Array[i] - Array[j]);
        }
    }
    return shortestSpan;
}

int Span::longestSpan() {
    if (Array.size() <= 1)
        throw std::out_of_range("Not enough numbers for this operation");
    int longestSpan = INT_MIN;
    for (size_t i = 0; i < Array.size() - 1; i++)
    {
        for (size_t j = 1; j < Array.size(); j++)
        {
            if (longestSpan < abs(Array[i] - Array[j]) && i != j)
                longestSpan = abs(Array[i] - Array[j]);
        }

    }
    return longestSpan;
}

void Span::add_many_more(std::vector<int>::iterator start, std::vector<int>::iterator end){
    srand(time(NULL));
    size_t i = 0;
    for (std::vector<int>::iterator count = start; count < end; count++, i++)
    {
        if(i >= maxSize)
            throw std::out_of_range("trying to populate unavialable part of span");
        Array.push_back(rand());
    }
}


#endif