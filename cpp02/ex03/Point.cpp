#include "Point.hpp"


Point::Point()
    : x(0), y(0) {

}

Point::Point(float xin, float yin)
    : x(xin), y(yin) {

}

// Point& Point::operator=(const Point & copy) {
//     this->x = (Fixed)copy.getX();
//     this->y = (Fixed)copy.getY();
//     return *this;
// }
Point &Point::operator=(Point const &a)
{
	(Fixed) this->x = (Fixed) a.x;
	(Fixed) this->y = (Fixed) a.y;
	return *this;
}

Point::Point(Point const& copy) {this->x = copy.getX();this->y = copy.getY();}

Fixed Point::getX()const{return x;}
Fixed Point::getY()const{return y;}


Point::~Point()
{
}
