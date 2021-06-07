#pragma once
#include<string>
using namespace std;
/**
* \brief Независимый класс с полями, для возврата ошибки
*/
class Independent_class {
public:
	string message;
	explicit Independent_class(string message);
	/**
	* \brief Деструктор по умолчанию
	*/
	~Independent_class();
};