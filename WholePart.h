#pragma once
#include<iostream>
#include<exception>
#include "Empty_class.h"
#include "Independent_class.h"
#include "Successor_class.h"

/**
* \brief ‘ункци¤ вычисл¤юща¤ целую часть дроби, спецификатор не определЄн
* \param numerator числитель
* \param denominator знаменатель
* \return цела¤ часть дроби
*/
int WholePart1(int numerator, int denominator);
/**
* \brief ‘ункци¤ вычисл¤юща¤ целую часть дроби, спецификатор throw()
* \param numerator числитель
* \param denominator знаменатель
* \return цела¤ часть дроби
*/
int WholePart2(int numerator, int denominator);
/**
* \brief ‘ункци¤ вычисл¤юща¤ целую часть дроби, с конкретной спецификацией с подход¤щим стандартным исключением
* \param numerator числитель
* \param denominator знаменатель
* \return цела¤ часть дроби
*/
int WholePart3(int numerator, int denominator);
/**
* \brief ‘ункци¤ вычисл¤юща¤ целую часть дроби, со спецификацией с собственным реализованным исключением. (исключение как пустой класс)
* \param numerator числитель
* \param denominator знаменатель
* \return цела¤ часть дроби
*/
int WholePart4(int numerator, int denominator);
/**
* \brief ‘ункци¤ вычисл¤юща¤ целую часть дроби, со спецификацией с собственным реализованным исключением. (исключение как независимый класс с пол¤ми-параметрами функции)
* \param numerator числитель
* \param denominator знаменатель
* \return цела¤ часть дроби
*/
int WholePart5(int numerator, int denominator);
/**
* \brief ‘ункци¤ вычисл¤юща¤ целую часть дроби, со спецификацией с собственным реализованным исключением. (исключение как наследник от стандартного исключени¤ с пол¤ми)
* \param numerator числитель
* \param denominator знаменатель
* \return цела¤ часть дроби
*/
int WholePart6(int numerator, int denominator);