#include <iostream>

using namespace std;
int main() {
	int amount;

	cout << "Enter amount : ";
	cin >> amount;


	cout << " 500 rupee note " << amount / 500 << endl;
	amount %= 500;

	cout << " 100 rupee note " << amount / 100 << endl;
	amount %= 100;

	cout << " 50  rupee note " << amount / 50 << endl;
	amount %= 50;

	cout << " 20  rupee note " << amount / 20 << endl;
	amount %= 20;

	cout << " 10  rupee note " << amount / 10 << endl;
	amount %= 10;

	cout << " 5   rupee note " << amount / 5 << endl;
	amount %= 5;

	cout << " 1   rupee note " << amount << endl;
	 

	cout << endl;
	system("pause");
	return 0;
}