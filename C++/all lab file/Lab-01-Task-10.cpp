#include<iostream>
using namespace std;

int main() {
	float amount_paid = 600*21.77;
	float commission = amount_paid*0.02;

	cout << "Amount paid for the stock " << amount_paid << endl <<"Amount of the commission "<< commission << endl <<"Total amount paid "<<amount_paid+commission;

	cout << endl;
	system("pause");
	return 0;
}
