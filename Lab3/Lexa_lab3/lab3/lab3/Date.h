#pragma once
#include"Triad.h"
	/**
	* \brief ����� ����,������������� �� ������
	*/
class Date:public Triad{
private:
	unsigned int year, month, day;
	const int DAYINFEBLP = 29, DAYINFEB = 28, DAYINDEC = 31, DAYINAPR = 30;
public:
	/**
	* \brief �����������, ����������� ���, ����� � ����,������������ ������������ ���� ����.
	*/
	explicit Date(int year, int month, int day);

	/**
	* \brief ����������� �� ���������
	*/
	explicit Date() = default;

	/**
	* \brief ���������� �� ���������
	*/
	~Date();

	/**
	* \brief �����, ����������� 1 � ����� ������ 
	* \return ������, � ������ ������������ �� 1
	*/
	Date Increase()const;

	/**
	* \brief �����, ����������� ��� � ����
	* \param days ���������� ����
	* \return ���������� ����
	*/
	Date addDay(int days)const;

	/**
	* \brief ���������� ��������� <<
	* \param out �����
	* \param Other ����
	*/
	friend ostream& operator << (ostream& out, const Date& Other);
};
