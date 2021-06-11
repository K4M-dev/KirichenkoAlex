#pragma once
#include<string>
using namespace std;
/**
* \brief Независимый класс с полями, для возврата ошибки
*/
class Exception2 {
public:
	string message;
	/**
	* \brief Конструктор принимающий сообщение об ошибке
	*/
	explicit Exception2(const string& message);

	/**
	* \brief Деструктор по умолчанию
	*/
	~Exception2();
};
