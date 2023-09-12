#include<iostream>
using namespace std;

int main() {
	float weight, height, BMI;

	cout << "Enter weight in pounds : ";
	cin >> weight;
	cout << "Enter Height in inches : ";
	cin >> height;
	BMI = (weight * 703) / (height*height);
	
	if (BMI > 25) {
		cout << "overweigh";
	}
	else if(BMI <=25 && BMI >=18.5) {
		cout << "optimal weight";
	}
	else {
		cout << "Under-weight";
	}

	cout << endl;
	system("pause");
	return 0;
}
