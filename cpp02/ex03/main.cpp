#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point a(0,0);
	Point b(0,5);
	Point c(5,0);
	Point point(1,5);

	if(bsp(a, b, c, point))
		std::cout << "its inside\n";
	else
		std::cout << "its outside\n";
	return 0;
}