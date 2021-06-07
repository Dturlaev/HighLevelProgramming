#include <iostream>
#include "Square.h"
using namespace std;
Square::Square(const double upper_left_corner_x, const double upper_left_corner_y, const double length)
{
	this->upper_left_corner_x = upper_left_corner_x;
	this->upper_left_corner_y = upper_left_corner_y;
	set_length(length);
}
Square::Square(const double side)
{
	set_length(side);
	upper_left_corner_x = 0;
	upper_left_corner_y = side;
}
void Square::set_length(const double length)
{
	if (length > 0)
	{
		this->length = length;
	}
	else
	{
		throw invalid_argument("ƒлина должна быть больше нул§");
	}
}
void Square::set_upper_left_corner_x(const double x)
{
	upper_left_corner_x = x;
}
void Square::set_upper_left_corner_y(const double y)
{
	upper_left_corner_y = y;
}
void Square::set_new_length(const double length)
{
	set_length(length);
}
double Square::get_perimeter()const
{
	return length * 4;
}
double Square::get_area()const
{
	return length * length;
}
ostream& operator<<(ostream& out, const Square& sq)
{
	out << "Square: \n" <<"x1 = " << sq.upper_left_corner_x << endl;
	out << "y1 = " << sq.upper_left_corner_y << endl;
	out << "x2 = " << sq.upper_left_corner_x + sq.length << endl;
	out << "y2 = " << sq.upper_left_corner_y << endl;
	out << "x3 = " << sq.upper_left_corner_x + sq.length << endl;
	out << "y3 = " << sq.upper_left_corner_y - sq.length << endl;
	out << "x4 = " << sq.upper_left_corner_x << endl;
	out<< "y4 = " << sq.upper_left_corner_y - sq.length << endl;
	out << "Perimeter = " << sq.get_perimeter() << endl;
	out << "Area = " << sq.get_area() << endl;
	return out;
}