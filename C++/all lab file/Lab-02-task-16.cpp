#include <iostream>
#define PI 3.14
using namespace std;
int main() {
	int number_people, number_pizza, slice_pizza;
	float pizza_diameter,area, radius;

	cout << "Number of people who will be at the party : ";
	cin >> number_people;
	cout << "The diameter of the pizzas to be ordered in inches: ";
	cin >> pizza_diameter;

	radius = pizza_diameter / 2;
	area = (PI * radius * radius);
	if (area >= 14.125) {
		slice_pizza = area / 14.125;

		number_pizza = (number_people * 4) / slice_pizza;

		cout << "Number of pizzas to purchase : " << number_pizza;
	}
	else {
		cout << "your pizza size is too small";
	}
	cout << endl;
	system("pause");
	return 0;
}