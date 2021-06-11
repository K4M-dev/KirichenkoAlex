#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief Класс насследник от стандартного исключения
*/
class Exception3 :public invalid_argument {
public:
	/**
	* \brief Конструктор принимающий сообщение об ошибке
	*/
	explicit Exception3(const string& message);

	/**
	* \brief Деструктор по умолчанию
	*/
	~Exception3();
};
