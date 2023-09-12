#include<iostream>
using namespace std;

int main() {
	int input_num, r = 0;

	cout << "Enter any number : ";
	cin >> input_num;

	while (input_num != 0) {
		r = (r) + (input_num % 10);
		input_num = (input_num / 10);
	}

	cout << "The sum number is : " << r;


	cout << endl;
	system("pause");
	return 0;
}
