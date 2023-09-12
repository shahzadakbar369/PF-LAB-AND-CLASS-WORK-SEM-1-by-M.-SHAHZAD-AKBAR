#include <iostream>

using namespace std;
int main() {
	int num_ate,user_calorie, calories_of_cookie;

	cout << "enter number of cookie you ate : ";
	cin >> num_ate;
	 
	if (num_ate <= 40) {
		calories_of_cookie = (300 / 4);
		user_calorie = num_ate * calories_of_cookie;
		cout << "your calories is " << user_calorie;
	}
	else {
		cout << "your input is wrong there are only 40 cokies in bag";
	}
	cout << endl;
	system("pause");
	return 0;
}