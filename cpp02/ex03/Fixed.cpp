#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const int val)
	:fixed_point(val << fract_bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
	: fixed_point(roundf(val* (1 << fract_bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}


// Destructor
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


// Operators
Fixed& Fixed::operator=(const Fixed& assign)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->fixed_point = assign.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return(fixed_point);
}

void Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

int Fixed::toInt() const {
	return (int)(fixed_point >> fract_bits);
}

float Fixed::toFloat() const {
	return (float)fixed_point / (float)(1 << fract_bits);
}
std::ostream& operator<<(std::ostream& out, Fixed const& val) {
	out << val.toFloat();
	return out;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) { return a.getRawBits() > b.getRawBits() ? a : b; }
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) { return a.getRawBits() > b.getRawBits() ? a : b; }
Fixed& Fixed::min(Fixed& a, Fixed& b) { return a.getRawBits() < b.getRawBits() ? a : b; }
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) { return a.getRawBits() < b.getRawBits() ? a : b; }

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->fixed_point++;
	return(temp);
}

Fixed Fixed::operator++()
{
	this->fixed_point++;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->fixed_point--;
	return(temp);
}

Fixed Fixed::operator--() {
	this->fixed_point--;
	return(*this);
}

bool Fixed::operator>(Fixed const& other) const {
	return this->getRawBits() > other.getRawBits();
}
bool Fixed::operator<(Fixed const& other) const {
	return this->getRawBits() < other.getRawBits();
}
bool Fixed::operator>=(Fixed const& other) const {
	return this->getRawBits() >= other.getRawBits();
}
bool Fixed::operator<=(Fixed const& other) const {
	return this->getRawBits() <= other.getRawBits();
}
bool Fixed::operator==(Fixed const& other) const {
	return this->getRawBits() == other.getRawBits();
}
bool Fixed::operator!=(Fixed const& other) const {
	return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(Fixed const &other){
	Fixed ret(this->toFloat() + other.toFloat());
	return ret;
}
Fixed Fixed::operator-(Fixed const &other){
	Fixed ret(this->toFloat() - other.toFloat());
	return ret;
}
Fixed Fixed::operator*(Fixed const &other){
	Fixed ret(this->toFloat() * other.toFloat());
	return ret;
}
Fixed Fixed::operator/(Fixed const &other){
	Fixed ret(this->toFloat() / other.toFloat());
	return ret;
}