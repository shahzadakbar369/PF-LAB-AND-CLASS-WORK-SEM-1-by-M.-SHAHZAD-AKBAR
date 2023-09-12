#include <iostream>
#define PI 3.14
using namespace std;
int main() {
	int number_slice;
	float Pizza_diameter,area,radius;

	cout << "diameter of Pizza in inches : ";
	cin >> Pizza_diameter;

	radius = Pizza_diameter / 2;
	area = PI * radius * radius;
	if(area >= 14.125){
	number_slice = area / 14.125;
	cout << "number of slices : " << number_slice;
	}
	else {
		cout << "pizza size is too small";
	}
	cout << endl;
	system("pause");
	return 0;
}
