#pragma once
#include<string>
using namespace std;
/**
* \brief ����������� ����� � ������, ��� �������� ������
*/
class Exception2 {
public:
	string message;
	explicit Exception2(string message);
	/**
	* \brief ���������� �� ���������
	*/
	~Exception2();
};
