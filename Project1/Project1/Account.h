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
	 \brief	Сеттер проверяющий процент на положительность
	 */
	void set_percent(double percent);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Account(string surname, string account_number, double percent, double sum);
	/**
	 \brief	Деструктор
	 */
	~Account() = default;
	/**
	\brief	Конструктор копирования по умолчанию.
	*/
	Account(const  Account&) = default;
	/**
	\brief	Конструктор присваивания по умолчанию.
	*/
	Account& operator=(const  Account&) = default;
	/**
	 \brief	Получаем фамилию
	 \returns	surname.
	 */
	string get_surname();
	/**
	 \brief	Получаем номер аккаунта
	 \returns	account number
	 */
	string get_account_number();
	/**
	 \brief	Получаем процент
	 \returns	percent
	 */
	double get_percent();
	/**
	 \brief	Получаем сумму
	 \returns	sum
	 */
	double get_sum();
	/**
	 \brief	Получаем новую фамилию
	 */
	void set_surname(string surname);
	/**
	 \brief	Снимаем деньги
	 */
	void set_withdraw_money(double money);
	/**
	 \brief	Пополняем деньги
	 */
	void set_add_money(double money);
	/**
	 \brief	Зачислить процент
	 */
	void set_accural_percent();
	/**
	 \brief	Получаем в долларах
	 \returns	sum
	 */
	double get_in_euro(double euro);
	/**
	 \brief	Получаем св евро
	 \returns	sum = sum / dollar
	 */
	double get_in_dollar(double dollar);
};
