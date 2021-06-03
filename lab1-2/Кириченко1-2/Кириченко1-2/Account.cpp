#include "Account.h"
using namespace std;
void Account::set_percent(double percent)
{
	if (percent >= 0)
	{
		this->percent = percent;
	}
	else
	{
		throw invalid_argument("Процент должен быть больше нуля");
	}
}
Account::Account(string& surname, string& account_number, double percent, double sum)
{
	this->surname = surname;
	this->account_number = account_number;
	set_percent(percent);
	this->sum = sum;
}
void Account::set_surname(string surname)
{
	this->surname = surname;
}
void Account::set_withdraw_money(double money)
{
	if (sum >= money)
	{
		round((sum -= money) * 100) / 100;
	}
	else
	{
		throw invalid_argument("Нельзя снять больше, чем лежит на счету");
	}
}
void Account::set_add_money(double money)
{
	if (money > 0)
	{
		round((sum += money) * 100) / 100;
	}
	else
	{
		throw invalid_argument("Нельзя положить отрицательную сумму");
	}
}
void Account::set_accural_percent()
{
	round((sum = sum + (sum * (percent / 100))) * 100) / 100;
}
string& Account::get_surname()
{
	return surname;
}
string& Account::get_account_number()
{
	return account_number;
}
double Account::get_percent()
{
	return percent;
}
double Account::get_sum()
{
	return round(sum * 100) / 100;
}
double Account::get_in_euro(double euro)
{
	return round((sum = sum / euro) * 100) / 100;
}
double Account::get_in_dollar(double dollar)
{
	return round((sum = sum / dollar) * 100) / 100;
}
ostream& operator<<(ostream& out,const Account& acc)
{
	out << "surname: " << acc.surname << endl;
	out << "account number: " << acc.account_number << endl;
	out << "percent = " << acc.percent << endl;
	out << "summ = " << acc.sum << endl;
	return out;
}