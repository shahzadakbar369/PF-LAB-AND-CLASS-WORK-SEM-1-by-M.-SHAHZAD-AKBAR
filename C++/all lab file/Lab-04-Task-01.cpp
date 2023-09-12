#include<iostream>
using namespace std;

int main() {
	int input_num, r = 0;

	cout << "Enter any number : ";
	cin >> input_num;

	while (input_num != 0) {
		r = (r * 10) + (input_num % 10);
		input_num = (input_num / 10);
	}

	cout << "the reverse number is :" << r;


	cout << endl;
	system("pause");
	return 0;
}
