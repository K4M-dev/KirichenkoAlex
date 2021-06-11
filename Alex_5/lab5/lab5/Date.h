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
	* \param year год 
	* \param month месяц 
	* \param day день 
	*/
	Date(int year, int month, int day);

	/**
	* \brief Проверка даты на правильность ввода
	* \return Результат проверки(1 - если введена неправильно, 0 - если правильно)
	*/
	bool IsDateValid()const;
};