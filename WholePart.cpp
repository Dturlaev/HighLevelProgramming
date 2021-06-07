#include "WholePart.h"

int WholePart1(int numerator, int denominator) 
{
	return numerator / denominator;
}

int WholePart2(int numerator, int denominator)
{
	if (denominator == 0)
		throw 1;
	else
		return WholePart1(numerator, denominator);
}

int WholePart3(int numerator, int denominator) 
{
	if (denominator == 0) {
		throw invalid_argument{ "ќшибка!«наменатель равен 0, стандартное исключение" };
	}
	else
		return WholePart1(numerator, denominator);
}

int WholePart4(int numerator, int denominator) 
{
	if (denominator == 0) 
	{
		throw Empty_class();
	}
	else 
		return WholePart1(numerator, denominator);
}
int WholePart5(int numerator, int denominator) 
{

	if (denominator == 0) {
		throw Independent_class("ќшибка!«наменатель равен 0, независимый класс с пол¤ми-параметрами функции");
	}
	else
		return WholePart1(numerator, denominator);
}
int WholePart6(int numerator, int denominator) 
{

	if (denominator == 0) {
		throw Successor_class("ќшибка!«наменатель равен 0, класс наследник");
	}
	else
		return WholePart1(numerator, denominator);
}