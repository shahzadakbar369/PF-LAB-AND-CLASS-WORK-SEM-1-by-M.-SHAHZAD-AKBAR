#include <iostream>

using namespace std;
int main() {
	int time_com, principal;
	float interst_rate, amount,power=1;

	cout << "Interest Rate : Rs.";
	cin >> interst_rate;
	cout << "Time Compounded : ";
	cin >> time_com;
	cout << "Principal : \b Rs.";
	cin >> principal;

	interst_rate = interst_rate / 100;
	for (int L = 1; L <= time_com; L++) {
		power *= (1 + interst_rate / time_com);
	}
	amount = principal * power;
	cout << "Interest : Rs. " << (amount - principal) << endl << "Amounts in Savings : Rs. " << amount;

	cout << endl;
	system("pause");
	return 0;
}
