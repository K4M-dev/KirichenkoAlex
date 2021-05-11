#include "Account.h"
using namespace std;

int main()
{
	Account a("123", "4458", 200, 100.553);
	cout << a.get_sum() << endl;
	a.set_withdraw_money(50.36);
	cout << a.get_sum() << endl;
	a.set_add_money(50.36);
	cout << a.get_sum() << endl;
	a.set_accural_percent();
	cout << a.get_sum() << endl;
}