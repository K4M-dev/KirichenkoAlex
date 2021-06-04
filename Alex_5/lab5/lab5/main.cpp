#include "DiffBetweenDate.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Date FirstDate(-2002, 9, 14);
	Date SecondDate(2021, 5, -29);

	try {
		cout << DiffBetweenDate1(FirstDate, SecondDate) << endl;
	}
	catch(...) {
		cout << "Дата введена неправильно!" << endl;
	}

	try {
		cout << DiffBetweenDate2(FirstDate, SecondDate) << endl;
	}
	catch (int) {
		cout << "Дата введена неправильно!,спецификатор throw" << endl;
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
		cerr << "Дата введена неправильно!,пустой класс" << endl;
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