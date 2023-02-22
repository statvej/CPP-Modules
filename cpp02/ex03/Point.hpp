#include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;
public:
    Point();
    Point(float xin, float yin);
    Point(Point const & copy);
    Point& operator=(Point const& copy);

    Fixed getX() const;
    Fixed getY() const;

    void setX(Fixed xin);
    void setY(Fixed yin);

    ~Point();
};

