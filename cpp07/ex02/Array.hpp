
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<class T>
class Array
{
private:
    T* _array;
    unsigned int _size;
public:
    Array();
    Array(unsigned int);
    Array(Array<T> const&);
    Array& operator=(Array<T> const&);
    T& operator[](size_t i)const;
    unsigned int size() const;
    ~Array();
};
#include "Array.tpp"


#endif