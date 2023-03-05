#include "Array.hpp"

template<class T>
Array<T>::Array()
{
	this->_array = NULL;
	this->_size = 0;
}

template<class T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	this->_size = n;
}

template<class T>
Array<T>::Array(const Array &other)
{
	*this = other;	
}

template<class T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if(_array)
        delete [] _array;
    this->_array = new T [other.size()];
	this->_size = other.size();
	for (size_t i = 0; i < _size; i++)
		_array[i] = other[i];
    return *this; 
}

template<class T>
Array<T>::~Array()
{
	delete[] _array;
}

template<class T>
T &Array<T>::operator[](size_t i) const
{
    if(i < _size)
        return _array[i];
    else
        throw std::out_of_range("operator [] goes out of range");
}

template<class T>
unsigned int Array<T>::size() const{return _size;}