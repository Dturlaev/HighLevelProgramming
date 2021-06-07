#include "Right_triangle.h"

Right_triangle::Right_triangle(const double a, const double b)
{
	set_a(a);
	set_b(b);
}
Right_triangle::~Right_triangle() {};
double Right_triangle::get_perimeter()
{
	double hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
	return hypotenuse + a + b;
}
double Right_triangle::get_area()
{
	return a * b * 0.5;
}
ostream& operator<<(ostream& out, Right_triangle& is)
{
	out << "Right triangle: \n" << "Perimeter = " << is.get_perimeter() << endl;
	out << "Area = " << is.get_area() << endl;
	return out;
}