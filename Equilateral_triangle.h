#pragma once
#include "Triangle.h"
class Equilateral_triangle : public Triangle
{
public:
	/**
* \brief Конструктор с параметрами
*/
	explicit Equilateral_triangle(const double a);
	/**
* \brief виртуальный деструктор
*/
	virtual ~Equilateral_triangle();
	/**
* \brief возвращает периметр
*/
	double get_perimeter()override;
	/**
* \brief возвращает площади
*/
	double get_area()override;
	/**
* \brief оператор сдвига
*/
	friend ostream& operator<<(ostream& out, Equilateral_triangle& eq);
};

