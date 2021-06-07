#pragma once
#include "Triangle.h"
class Isosceles_triangle :public Triangle
{
public:
/**
* \brief Конструктор с параметрами
*/
	explicit Isosceles_triangle(const double a, const double b);
	/**
* \brief виртуальный деструктор
*/
	virtual ~Isosceles_triangle();
	/**
* \brief возвращает периметр
*/
	double get_perimeter() override;
	/**
* \brief возвращает площади
*/
	double get_area()override;
	/**
* \brief оператор сдвига
*/
	friend ostream& operator<<(ostream& out, Isosceles_triangle& is);
};

