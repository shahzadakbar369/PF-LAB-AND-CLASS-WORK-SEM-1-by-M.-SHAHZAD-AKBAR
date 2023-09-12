#include <iostream>

using namespace std;
int main() {
	int price_house;
	float tax_rate,tax_pay;
	cout << "input the actual value of a piece of property $ ";
	cin >> price_house;
	cout << "current tax rate for each $100 of assessed value. $ ";
	cin >> tax_rate;

	price_house = price_house * 0.6;
	tax_pay = ((price_house - 5000)*(tax_rate/100));
	cout << "Annual property tax a senior homeowner $ " << tax_pay << endl;
	cout << "The quarterly tax would be.\b $ " << (tax_pay / 4);
	cout << endl;
	system("pause");
	return 0;
}