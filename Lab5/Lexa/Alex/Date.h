#pragma once
/**
* \brief ��������� ����
*/
struct Date {
	int year, month, day;

	/**
	* \brief ����������� �� ���������
	*/
	Date() = default;

	/**
	* \brief ����������� � �����������
	*/
	Date(int year, int month, int day);

	/**
	* \brief �������� ���� �� ������������ �����
	* \return ��������� ��������
	*/
	bool Check();
};