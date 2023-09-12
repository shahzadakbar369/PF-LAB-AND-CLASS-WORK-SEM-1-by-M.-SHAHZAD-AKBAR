#include <iostream>
#include<cmath>
using namespace std;
int main() {
	double a, y;

	cout << "enter angel in radian : ";
	cin >> a;

	y = (1.0/sin(a));
	cout << "cosecant of angel is in radian " << y << endl;


	system("pause");
	return 0;
}