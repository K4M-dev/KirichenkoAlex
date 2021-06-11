#include "DiffBetweenDate.h"
int Difference(const Date& Date1, const Date& Date2) {
	unsigned int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	unsigned int day = 0;
	for (int i = Date1.year + 1; i < Date2.year; i++) {
		if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
			day += 366;
		else
			day += 365;
	}
	day += Date2.day;
	for (int i = 0; i < Date2.month - 1; i++) {
		if (i == 1 and Date1.year % 4 == 0)
			day += 1;
		day += month[i];
	}
	day += month[Date1.month - 1] - Date1.day;

	for (int i = Date1.month; i < 12; i++) {
		if (i == 1 && Date1.year % 4 == 0)
			day += 1;
		day += month[i];
	}
	return day;
}

int DiffBetweenDate1(const Date& Date1, const Date& Date2) {
	if (Date1.IsDateValid() || Date2.IsDateValid())
		throw 1.0;
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate2(const Date& Date1, const Date& Date2) {
	if (Date1.IsDateValid() || Date2.IsDateValid())
		throw 1;
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate3(const Date& Date1, const Date& Date2) {
	if (Date1.IsDateValid() || Date2.IsDateValid())
		throw invalid_argument{ "Дата введена неправильно, стандартное исключение" };
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate4(const Date& Date1, const Date& Date2) {
	if (Date1.IsDateValid() || Date2.IsDateValid())
		throw Exception();
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate5(const Date& Date1, const Date& Date2) {
	if (Date1.IsDateValid() || Date2.IsDateValid())
		throw Exception2("Дата введена неправильно, независимый класс с полями-параметрами функции");
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate6(const Date& Date1, const Date& Date2) {
	if (Date1.IsDateValid() || Date2.IsDateValid())
		throw Exception3("Дата введена неправильно, класс наследник");
	else
		return Difference(Date1, Date2);
}