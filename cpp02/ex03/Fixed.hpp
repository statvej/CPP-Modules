#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <fstream>

class Fixed
{
	public:
		// Constructors
		Fixed();

		Fixed(const int val);
		Fixed(const float val);
		
		Fixed(const Fixed &copy);
		
		// Destructor
		~Fixed();
		
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		Fixed operator+(Fixed const &other);
		Fixed operator-(Fixed const &other);
		Fixed operator*(Fixed const &other);
		Fixed operator/(Fixed const &other);

		// Operators
		Fixed & operator=(const Fixed &assign);
		int getRawBits() const;
		void setRawBits(const int raw);
		int toInt() const;
		float toFloat() const;


		//Functions

		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
	private:
		int fixed_point;
		static const int fract_bits = 8;
};
std::ostream &operator<<(std::ostream &out, Fixed const &val);

#endif