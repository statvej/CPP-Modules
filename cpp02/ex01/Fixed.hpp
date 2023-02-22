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
		
		// Operators
		Fixed & operator=(const Fixed &assign);
		int getRawBits() const;
		void setRawBits(const int raw);
		int toInt() const;
		float toFloat() const;
	private:
		int fixed_point;
		static const int fract_bits = 8;
};
std::ostream &operator<<(std::ostream &out, Fixed const &val);

#endif