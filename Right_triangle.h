#pragma once
#include "Triangle.h"
class Right_triangle :public Triangle
{
public:
	/**
* \brief Конструктор с параметрами
*/
	explicit Right_triangle(const double a, const double b);
	/**
* \brief виртуальный деструктор
*/
	virtual ~Right_triangle();
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
	friend ostream& operator<<(ostream& out, Right_triangle& is);
};

