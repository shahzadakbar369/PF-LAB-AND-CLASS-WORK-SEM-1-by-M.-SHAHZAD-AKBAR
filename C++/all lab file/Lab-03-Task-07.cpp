#include<iostream>
using namespace std;

int main() {
	int weight, distance, charges;
	//input 
	do {
		weight = 0;
		cout << "Enter weight in Kg (only 0 to 20) : ";
		cin >> weight;
	} while (!((weight >0) && (weight <=20)));
	do {
		distance = 0;
		cout << "Enter distance in Km (only 10 to 3000 ): ";
		cin >> distance;
	} while (!((distance >= 10) && (distance <= 3000)));
	//charges calculation
	if (weight <= 2) {
		charges = 50 * (distance/500.0);
	}
	else if (weight > 2 && weight <= 6) {
		charges = 100 * (distance/500.0);
	}
	else if (weight > 6 && weight <= 10) {
		charges = 150 * (distance/500.0);
	}
	else {
		charges = 200 * (distance/500.0);
	}
	//result
	cout << "shipping company charges : " << charges;

	cout << endl;
	system("pause");
	return 0;
}
