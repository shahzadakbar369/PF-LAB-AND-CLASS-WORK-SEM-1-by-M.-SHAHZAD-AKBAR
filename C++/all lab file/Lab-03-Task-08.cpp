#include<iostream>
using namespace std;

int main() {
	int calories;
	float fat, calories_in_fat, percentage;
	//input
	do {
		calories = -1;
		cout << "Enter number of calories in food: ";
		cin >> calories;
	} while (!(calories >=0));
	do {
		fat = -1;
		cout << "Enter fat (grams) in food : ";
		cin >> fat;
	} while (!(fat >= 0));
	//calculate calories in fat
	calories_in_fat = fat*9;


	//calculationj
	if (calories_in_fat > calories) {
		cout << "Either the calories or the fat grams were incorrectly entered";
	}
	else {
		percentage = (calories_in_fat / calories) * 100;

		cout << "Percentage of calories that come from fat : " << percentage << " %" << endl;
		if (percentage < 30) {
			cout << "Food is low in fat.";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
