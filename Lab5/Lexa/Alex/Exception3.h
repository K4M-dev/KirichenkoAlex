#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief ����� ���������� �� ������������ ����������
*/
class Exception3 :public invalid_argument {
public:
	explicit Exception3(string message);

	/**
	* \brief ���������� �� ���������
	*/
	~Exception3();
};
