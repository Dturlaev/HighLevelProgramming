#include "Triangle.h"
Triangle::~Triangle() {};
void Triangle::set_a(const double a)
{
	if (a > 0 )
	{
		this->a = a;
	}
	else
	{
		throw invalid_argument{ "Неверные значения" };
	}
}
void Triangle::set_b(const double b)
{
	if (b > 0)
	{
		this->b = b;
	}
	else
	{
		throw invalid_argument{ "Неверные значения" };
	}
}
void Triangle::set_angle(const double angle)
{
	if (angle > 0)
	{
		this->angle = angle;
	}
	else
	{
		throw invalid_argument{ "Неверные значения" };
	}
}