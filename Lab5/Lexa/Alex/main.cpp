#include "DiffBetweenDate.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Date FirstDate(-2002,9,14);
	Date SecondDate(2021,5,-29);

	if (FirstDate.Check() || SecondDate.Check())
		cout << "Дата введена неправильно!" << endl;
	else
		cout<< DiffBetweenDate1(FirstDate, SecondDate)<<endl;

	try {
		cout <<DiffBetweenDate2(FirstDate, SecondDate) << endl;
	}
	catch (int) {
		cout << "Ошибка!Знаменатель равен 0, спецификатор throw" << endl;
	}

	try {
		cout << DiffBetweenDate3(FirstDate, SecondDate) << endl;
	}
	catch (invalid_argument error) {
		cerr << error.what() << endl;
	}

	try {
		cout << DiffBetweenDate4(FirstDate, SecondDate) << endl;
	}
	catch (Exception) {
		cerr << "Ошибка!Знаменатель равен 0, пустой класс" << endl;
	}

	try {
		cout << DiffBetweenDate5(FirstDate, SecondDate) << endl;
	}
	catch (Exception2 error) {
		cerr << error.message << endl;
	}

	try {
		cout << DiffBetweenDate6(FirstDate, SecondDate) << endl;
	}
	catch (Exception3 error) {
		cerr << error.what() << endl;
	}
}