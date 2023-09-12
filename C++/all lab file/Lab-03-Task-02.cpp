#include<iostream>
using namespace std;

int main() {
	float length_1, length_2, width_1, width_2, area_1, area_2;

	cout << "Enter the Length and than width\n";
	cin >> length_1 >> width_1;
	cout << "Enter the Length and than width of another rectangle\n";
	cin >> length_2 >> width_2;

	area_1 = length_1 * width_1;
	area_2 = length_2 * width_2;

	if (area_1 == area_2) {
		cout << "Both Rectangle have same Area";
	}
	else if(area_1 > area_2) {
		cout << "Rectangle of having length : " << length_1 << " and Width : " << width_1 << " is greater";
	}
	else {
		cout << "Rectangle of having length : " << length_2 << " and Width : " << width_2 << " is greater";
	}


	cout << endl;
	system("pause");
	return 0;
}
