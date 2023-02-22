#include "Fixed.hpp"

int main()
{

	Fixed a;
	Fixed const b( 10 );
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;
	std::cout << "Comparision" << std::endl;
	//b == should be bigger
	if(a < b)
	{
		std::cout << "B is bigger" << std::endl;
	}
	std::cout << "Instructions" << std::endl;
	Fixed c(10);
	Fixed d(2);
	std::cout << c * d << std::endl;
	std::cout << c / d << std::endl;
	std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	
	return 0;
}