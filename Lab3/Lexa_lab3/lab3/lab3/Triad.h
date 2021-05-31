#pragma once
#include "iostream"
using namespace std;
	/**
	* \brief ����� ������
	*/
class Triad
{
private:
	int first, second, third;

public:
	/**
	* \brief �����������, ����������� ������, ������ � ������ ����� ������
	*/
	explicit Triad(int first, int second, int third);

	/**
	* \brief ����������� �� ���������
	*/
	explicit Triad() = default;

	/**
	* \brief ���������� �� ���������
	*/
	~Triad();

	/**
	* \brief �����, ����������� 1 � ����� ������
	* \return ������, � ������ ������������ �� 1
	*/
	Triad Increase()const;

	/**
	* \brief ���������� ��������� <<
	* \param out �����
	* \param Other ������
	*/
	friend ostream& operator << (ostream& cout, const Triad& Other);
};