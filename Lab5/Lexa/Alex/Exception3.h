#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief Класс насследник от стандартного исключения
*/
class Exception3 :public invalid_argument {
public:
	explicit Exception3(string message);

	/**
	* \brief Деструктор по умолчанию
	*/
	~Exception3();
};
