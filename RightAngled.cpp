#include "RightAngled.h"

void RightAngled::set_legs(const double leg1, const double leg2)
{
	if (leg1 > 0 && leg2 > 0)
	{
		this->a = leg1;
		this->b = leg2;
	}
	else
	{
		throw invalid_argument{ "Неверные катеты" };
	}
}
RightAngled::RightAngled(const double leg1, const double leg2)
{
	set_legs(leg1, leg2);
}
double RightAngled::get_hypotenuse() const
{
	return sqrt((pow(a, 2) + pow(b, 2)));
}
double RightAngled::get_area()const
{
	return (a * b) / 2.0;
}
ostream& operator<<(ostream& out, RightAngled& rg)
{
	out << "RightAngled leg1 = " << rg.a << endl;
	out << "RightAngled leg2 = " << rg.b << endl;
	out << "RightAngled hypotenuse = " << rg.get_hypotenuse() << endl;
	out << "Area = " << rg.get_area() << endl;
	return out;
}
