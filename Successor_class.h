#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief   ласс насследник от стандартного исключени§, дл¤ возврата ошибки
*/
class Successor_class :public invalid_argument {
public:
	explicit Successor_class(string message);

	/**
	* \brief деструктор по умолчанию
	*/
	~Successor_class();
};