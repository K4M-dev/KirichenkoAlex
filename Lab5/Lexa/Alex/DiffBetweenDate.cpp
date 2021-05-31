#include "DiffBetweenDate.h"
int Difference(Date& Date1, Date& Date2) {
	unsigned int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	unsigned int day = 0;
	for (int i = Date1.year+1; i < Date2.year; i++) {
		if (i % 4 == 0)
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

int DiffBetweenDate1(Date& Date1, Date& Date2) {
		return Difference(Date1,Date2);
}
int DiffBetweenDate2(Date& Date1, Date& Date2) {
	if (Date1.Check() || Date2.Check())
		throw 1;
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate3(Date& Date1, Date& Date2) {
	if (Date1.Check() || Date2.Check())
		throw invalid_argument{ "Ошибка!Дата введена неправильно, стандартное исключение" };
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate4(Date& Date1, Date& Date2) {
	if (Date1.Check() || Date2.Check())
		throw Exception();
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate5(Date& Date1, Date& Date2) {
	if (Date1.Check() || Date2.Check())
		throw Exception2("Ошибка!Дата введена неправильно, независимый класс с полями-параметрами функции");
	else
		return Difference(Date1, Date2);
}
int DiffBetweenDate6(Date& Date1, Date& Date2) {
	if (Date1.Check() || Date2.Check())
		throw Exception3("Ошибка!Дата введена неправильно, класс наследник");
	else
		return Difference(Date1, Date2);
}























