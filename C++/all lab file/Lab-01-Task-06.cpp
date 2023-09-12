#include<iostream>
using namespace std;

int main() {
	int meal_charge = 4450;
	float tax = meal_charge * 0.0675;
	float total_charges = meal_charge + tax;
	float tip = total_charges * 0.15;

	cout << "Meal cost = "<< meal_charge << endl << "Tax Amount = " << tax << endl << "Tip amount = " << tip << endl <<"Total bill = "<< total_charges;

	cout << endl;
	system("pause");
	return 0;
}