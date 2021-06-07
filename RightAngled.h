#pragma once
#include "Pair.h"
#include <cmath>
class RightAngled:public Pair
{
private:
	double leg1;
	double leg2;
	/**
	 \brief	Проверяет катеты на положительность
	 */
	void set_legs(const double leg1, const double leg2);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit RightAngled(const double leg1, const double leg2);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~RightAngled() = default;
	/**
	 \brief	Конструктор копирования
	 */
	RightAngled(const  RightAngled&) = default;
	/**
	 \brief	Конструктор присвоения
	 */
	RightAngled& operator=(const  RightAngled&) = default;
	/**
	 \brief	получает гипотенузу
	 */
	double get_hypotenuse() const;
	/**
	 \brief	получает площадь
	 */
	double get_area()const;
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, RightAngled& rg);
};

