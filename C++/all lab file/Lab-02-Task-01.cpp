#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double value1, value2, value3;
	cout << "Enter the number : ";
	cin >> value1;
	value2 = 2 * pow(value1, 2.0);
	value3 = 3 + value2 / 2-1;
	cout << value3;

	cout << endl;
	system("pause");
	return 0;
}