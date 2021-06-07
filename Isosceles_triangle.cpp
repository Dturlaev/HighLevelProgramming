#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(const double a, const double b)
{
	set_a(a);
	set_b(b);
}
Isosceles_triangle::~Isosceles_triangle() {};
double Isosceles_triangle::get_perimeter() 
{
	return a * 2.0 + b;
}
double Isosceles_triangle::get_area()
{
	double p = (a + a + b) / 2.0;
	return sqrt(p * (p - a) * (p - a) * (p - b));
}
ostream& operator<<(ostream& out, Isosceles_triangle& is)
{
	out << "Isosceles triangle: \n" <<"Perimeter = " << is.get_perimeter() << endl;
	out << "Area = " << is.get_area() << endl;
	return out;
}