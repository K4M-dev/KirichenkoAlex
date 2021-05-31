#pragma once
#include"Triad.h"
	/**
	* \brief Класс дата,наследованный от Триады
	*/
class Date:public Triad{
private:
	unsigned int year, month, day;
	const int DAYINFEBLP = 29, DAYINFEB = 28, DAYINDEC = 31, DAYINAPR = 30;
public:
	/**
	* \brief Конструктор, принимающий год, месяц и день,обрабатывает неправильный ввод даты.
	*/
	explicit Date(int year, int month, int day);

	/**
	* \brief Конструктор по умолчанию
	*/
	explicit Date() = default;

	/**
	* \brief Деструктор по умолчанию
	*/
	~Date();

	/**
	* \brief Метод, добавляющий 1 к полям класса 
	* \return Объект, с полями увеличенными на 1
	*/
	Date Increase()const;

	/**
	* \brief Метод, добавляющий дни к дате
	* \param days Количество дней
	* \return Полученная дата
	*/
	Date addDay(int days)const;

	/**
	* \brief Перегрузка оператора <<
	* \param out Поток
	* \param Other Дата
	*/
	friend ostream& operator << (ostream& out, const Date& Other);
};
