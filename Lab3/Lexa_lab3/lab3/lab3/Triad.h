#pragma once
#include "iostream"
using namespace std;
	/**
	* \brief Класс триада
	*/
class Triad
{
private:
	int first, second, third;

public:
	/**
	* \brief Конструктор, принимающий первое, второе и третье числа триады
	*/
	explicit Triad(int first, int second, int third);

	/**
	* \brief Конструктор по умолчанию
	*/
	explicit Triad() = default;

	/**
	* \brief Деструктор по умолчанию
	*/
	~Triad();

	/**
	* \brief Метод, добавляющий 1 к полям класса
	* \return Объект, с полями увеличенными на 1
	*/
	Triad Increase()const;

	/**
	* \brief Перегрузка оператора <<
	* \param out Поток
	* \param Other триада
	*/
	friend ostream& operator << (ostream& cout, const Triad& Other);
};