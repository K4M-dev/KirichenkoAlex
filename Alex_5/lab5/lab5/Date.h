#pragma once
/**
* \brief Структура даты
*/
struct Date {
	int year, month, day;

	/**
	* \brief Конструктор по умолчанию
	*/
	Date() = default;

	/**
	* \brief Конструктор с параметрами
	*/
	Date(int year, int month, int day);

	/**
	* \brief Проверка даты на правильность ввода
	* \return Результат проверки
	*/
	bool Check();
};