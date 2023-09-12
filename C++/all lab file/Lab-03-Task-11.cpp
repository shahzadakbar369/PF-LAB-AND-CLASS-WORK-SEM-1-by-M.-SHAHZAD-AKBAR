#include<iostream>
using namespace std;

int main() {
	int number, input_num, r = 0;
	
	cout << "Enter a 5 digit number : ";
	cin >> input_num;
	number = input_num;

	 while (number != 0) {
		r = (r * 10) + (number % 10);
		number = (number / 10);
	 }

		if (r == input_num) {
			cout << "The number " << input_num << " is Palindrome";
		}
		else {
			cout << "The number " << input_num << " is not Palindrome";
		}
	


	cout << endl;
	system("pause");
	return 0;
}
