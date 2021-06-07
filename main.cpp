#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Right_triangle.h"

int main()
{
	Isosceles_triangle is(3, 4);
	Equilateral_triangle eq(3);
	Right_triangle ri(5, 7);
	cout << is << endl;
	cout << eq << endl;
	cout << ri << endl;
}