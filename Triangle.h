#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
protected:
	double a, b, angle;
/**
* \brief ”станавливает сторону a
*/
	void set_a(const double a);
/**
* \brief ”станавливает сторону b
*/
	void set_b(const double b);
/**
* \brief ”станавливает угол
*/
	void set_angle(const double angle);
public:
/**
* \brief ¬иртуальный деструктор
*/
	virtual ~Triangle() = 0;
/**
* \brief ¬иртуальный геттер периметра
*/
	virtual double get_perimeter() = 0;
/**
* \brief ¬иртуальный геттер площади
*/
	virtual double get_area() = 0;
};
