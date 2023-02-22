#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		
		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &assign);
		
		int getRawBits() const;
		void setRawBits(const int raw);
	private:
		int fixed_point;
		static const int fract_bits = 8;
};

#endif