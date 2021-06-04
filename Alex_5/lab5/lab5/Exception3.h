#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief  ласс насследник от стандартного исключени¤
*/
class Exception3 :public invalid_argument {
public:
	explicit Exception3(const string& message);

	/**
	* \brief ƒеструктор по умолчанию
	*/
	~Exception3();
};
