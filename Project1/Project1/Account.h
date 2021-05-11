#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Account
{
private:
	string surname;
	string account_number;
	double percent;
	double sum;
	/**
	 \brief	������ ����������� ������� �� ���������������
	 */
	void set_percent(double percent);
public:
	/**
	 \brief	����������� � �����������
	 */
	explicit Account(string surname, string account_number, double percent, double sum);
	/**
	 \brief	����������
	 */
	~Account() = default;
	/**
	\brief	����������� ����������� �� ���������.
	*/
	Account(const  Account&) = default;
	/**
	\brief	����������� ������������ �� ���������.
	*/
	Account& operator=(const  Account&) = default;
	/**
	 \brief	�������� �������
	 \returns	surname.
	 */
	string get_surname();
	/**
	 \brief	�������� ����� ��������
	 \returns	account number
	 */
	string get_account_number();
	/**
	 \brief	�������� �������
	 \returns	percent
	 */
	double get_percent();
	/**
	 \brief	�������� �����
	 \returns	sum
	 */
	double get_sum();
	/**
	 \brief	�������� ����� �������
	 */
	void set_surname(string surname);
	/**
	 \brief	������� ������
	 */
	void set_withdraw_money(double money);
	/**
	 \brief	��������� ������
	 */
	void set_add_money(double money);
	/**
	 \brief	��������� �������
	 */
	void set_accural_percent();
	/**
	 \brief	�������� � ��������
	 \returns	sum
	 */
	double get_in_euro(double euro);
	/**
	 \brief	�������� �� ����
	 \returns	sum = sum / dollar
	 */
	double get_in_dollar(double dollar);
};
