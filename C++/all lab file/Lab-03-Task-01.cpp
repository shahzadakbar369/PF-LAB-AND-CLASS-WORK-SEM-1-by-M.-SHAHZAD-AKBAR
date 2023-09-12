#include<iostream>
using namespace std;

int main() {
	int d, m, y;

	cout << "Enter the Date : ";
	cin >> d;
	cout << "Enter the Month : ";
	cin >> m;
	cout << "Enter the year (only last two digit) : ";
	cin >> y;

	if (d*m == y) {
		cout << "magic date";
	}
	else {
		cout << "date is not magic.";
	}


	cout << endl;
	system("pause");
	return 0;
}
