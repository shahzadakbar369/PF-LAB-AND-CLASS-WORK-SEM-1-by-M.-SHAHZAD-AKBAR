#include<iostream>
using namespace std;

int main() {
	int input_second,result;

	cout << "Enter the number of seconds : ";
	cin >> input_second;

	if (input_second >= 86400) {
		result = input_second / 86400;
		cout << "Number of days : " << result;
	}
	else if(input_second >= 3600) {
		result = input_second / 3600;
		cout << "Number of hours : " << result;
	}
	else if (input_second >= 60) {
		result = input_second / 60;
		cout << "Number of minutes : " << result;
	}
	else {
		cout << "Their are 60 sec in a minutes and your input is " << input_second;
	}

	cout << endl;
	system("pause");
	return 0;
}
