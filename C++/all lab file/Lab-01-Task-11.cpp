#include<iostream>
using namespace std;

int main() {
	float  customers_purchase = 12467*0.14;
	float citrus_purchas = customers_purchase*0.64;

	cout << "Number of customers in the survey who purchase " << customers_purchase << endl <<"Number of customers in the survey who prefer citrus flavored "<< citrus_purchas;

	cout << endl;
	system("pause");
	return 0;
}
