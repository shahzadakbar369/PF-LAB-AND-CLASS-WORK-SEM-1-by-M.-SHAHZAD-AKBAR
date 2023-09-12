#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int binary,converted=0,number,decimal=0, p=0;
	cout << "Enter Binary number : ";
	cin >> binary;
	number = binary;
	while (number !=0) {
		converted = (number % 10);
		number = number / 10;
		if (converted == 0 || converted == 1) {
			decimal = decimal + (converted * pow(2,p));
			p++;
		}
		else {
			cout << "Enter only BINARY number";
			decimal = 0;
			number = 0;
		}
	}
	if (decimal != 0) {
		cout << "Decimal number is " << decimal << " for given binary number " << binary;
	}
	cout << endl;
	system("pause");
	return 0;
}

