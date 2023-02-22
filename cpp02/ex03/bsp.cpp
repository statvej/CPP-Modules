#include "Fixed.hpp"
#include "Point.hpp"

Fixed CalcTriArea(Point p1, Point p2, Point p3)
{
    Fixed det(0.0f);
    det = ((p1.getX() - p3.getX()) * (p2.getY() - p3.getY())) - ((p2.getX() - p3.getX()) * (p1.getY() - p3.getY()));
    if(det < 0)
        return det / Fixed(-2.0f);
    return det / Fixed(2.0f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed TotalArea = CalcTriArea(a, b, c);
    Fixed Area1 = CalcTriArea(point, a, b);
    Fixed Area2 = CalcTriArea(point, b, c);
    Fixed Area3 = CalcTriArea(point, c, a);

    if (Area1 + Area2 + Area3 > TotalArea)
        return false;
    else
        return true;
}
