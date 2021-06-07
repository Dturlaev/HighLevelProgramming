#include <iostream>
#include "Square.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Square sq(5);
	cout << sq << endl;
	Square sq1(-10, 10, 12);
	cout << sq1 << endl;
}