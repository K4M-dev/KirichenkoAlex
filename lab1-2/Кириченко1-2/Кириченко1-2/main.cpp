#include "Account.h"
#include <string>
using namespace std;

int main()
{
	string surname = "123";
	string code = "4458";
	Account a(surname, code, 200, 100.553);
	cout << a.get_sum() << endl;
	a.set_withdraw_money(50.36);
	cout << a.get_sum() << endl;
	a.set_add_money(50.36);
	cout << a.get_sum() << endl;
	a.set_accural_percent();
	cout << a.get_sum() << endl;
	cout << a << endl;
}