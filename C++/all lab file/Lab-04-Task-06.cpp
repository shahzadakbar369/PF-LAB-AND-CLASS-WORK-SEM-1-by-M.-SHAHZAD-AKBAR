#include<iostream>
using namespace std;
#include<cmath>
int main() {
	double sum_series = 0,a=0.5,r=0.5;
	int n,power=0;

	cout << "Enter number of items for geometric series : ";
	cin >> n;

	while (power != n){
		sum_series += a * pow(r,power);
		power++;
	}
	cout << "Sum the geometric series : " << sum_series;

	cout << endl;
	system("pause");
	return 0;
}
