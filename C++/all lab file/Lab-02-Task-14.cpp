#include <iostream>

using namespace std;
int main() {
	int l, monthly_interst_rate,n;
	double monthly_pay,payment,rate,power=1;

	cout << "Loan Amont : Rs. ";
	cin >> l;
	cout << "Monthly Intererst Rate : ";
	cin >> monthly_interst_rate;
	cout << "Number of Payments : ";
	cin >> n;
	cout << "Monthly Payments : Rs. ";
	cin >> monthly_pay;
	rate = ((monthly_pay*monthly_interst_rate)/100)*(n*((float)monthly_interst_rate/100));
	for (int L = 1; L <= n; L++) {
			power *= (1 + rate);
	}
	payment = ((rate *power)/(power-1))*l;


	cout << "Amount Paid Back : Rs. " << payment << endl << "Interest Paid : Rs. " << (payment-l);

	cout << endl;
	system("pause");
	return 0;
}
