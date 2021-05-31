#include"Date.h"

ostream& operator << (ostream& out, const Date& Other) {
	out << Other.year << "/" << Other.month << "/" << Other.day;
	return out;
}
ostream& operator << (ostream& out, const Triad& Other) {
	out << Other.first << " " << Other.second << " " << Other.third;
	return out;
}

int main() {
	setlocale(LC_ALL, "Russian");
	Triad ObjTriad(1, 2, 3);
	cout << "Триада, увеличенная на 1 равна:" << ObjTriad.Increase() << endl<<endl;
	try
	{
		Date objDate(2002, 3,31);
		cout << "Исходная дата: " << objDate << endl << endl;
		cout << "Дата увеличенная на 1 равна: " << objDate.Increase() << endl << endl;
		int n;
		cout << "Введите кол-во дней прибавляемых к дате: ";
		cin >> n;
		cout << "Полученная дата: " << objDate.addDay(n) << endl << endl;
	}
	catch (invalid_argument error)
	{
		cout << error.what();
	}
}