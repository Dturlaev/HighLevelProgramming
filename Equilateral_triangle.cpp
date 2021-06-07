#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(const double a)
{
	set_a(a);
}
Equilateral_triangle::~Equilateral_triangle() {};
double Equilateral_triangle::get_perimeter()
{
	return a * 3.0;
}
double Equilateral_triangle::get_area()
{
	double p = (a * 3) / 2.0;
	return sqrt(p * pow((p-a),3));
}
ostream& operator<<(ostream& out, Equilateral_triangle& eq)
{
	out << "Equilateral triangle: \n" << "Perimeter = " << eq.get_perimeter() << endl;
	out << "Area = " << eq.get_area() << endl;
	return out;
}
