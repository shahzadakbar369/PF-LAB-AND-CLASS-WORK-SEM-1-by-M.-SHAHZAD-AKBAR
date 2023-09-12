#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.14159
#include<conio.h>

int main() {
	char choice;
	float area, parameter_1, parameter_2, parameter_3;
	//choice repitation until enter correct value
	cout << "Enter your choice only between 1 to 6\n1. for Calculate the area of a circle\n2. for Calculate the area of a Rectangle\n3. for Calculate the Area of a Triangle\n4. for Calculate the area of a Cylinder\n5. for Calculate the area of Trapezoid\n6. for Quit\n";

	do{
		choice = '0';
		parameter_1 = -1;
		parameter_2 = -1;
		parameter_3 = -1;
		area=0;
	do {
		choice = '0';
		choice = _getche();
		cout << endl;
	} while (!((choice >= '1') && (choice <= '6')));

	//calcualtion
	switch (choice)
	{
		//for area of circle
	case '1':
		do {
			parameter_1 = -1;
			cout << "Enter radius of the circle : ";
			cin >> parameter_1;
		} while (!(parameter_1 >=0));
		area = pi * pow(parameter_1,2);
		cout << "The area of circle is : " << area;
		break;
		//for rectangular
	case '2':
		do {
			parameter_1 = -1;
			cout << "Enter length of rectangle : ";
			cin >> parameter_1;
		} while (!(parameter_1 >=0));
		do{
			parameter_2 = -1;
			cout << "Enter width of rectangle : ";
			cin >> parameter_2;
		} while (!(parameter_2 >=0));
		area = parameter_1*parameter_2;
		cout << "The area of rectangle is : " << area;
		break;
	case '3':
		do {
			parameter_1 = -1;
			cout << "Enter length of triangle s base : ";
			cin >> parameter_1;
		} while (!(parameter_1 >= 0));
		do {
			parameter_2 = -1;
			cout << "Enter triangle height : ";
			cin >> parameter_2;
		} while (!(parameter_2 >= 0));
		area = parameter_1 * parameter_2 * 0.5;
		cout << "The area of triangle is : " << area;
		break;
		//for cylinder
	case '4':
		do {
			parameter_1 = -1;
			cout << "Enter radius of the cylinder : ";
			cin >> parameter_1;
		} while (!(parameter_1 >=0));
		do {
			parameter_2 = -1;
			cout << "Enter height of the cylinder : ";
			cin >> parameter_2;
		} while (!(parameter_2 >=0));
		area = ((2 * pi * pow(parameter_1,2)) + (parameter_2*(2 * pi * parameter_1)));
		cout << "The area of cylinder is : " << area;
		break;
		//for trapezoid
	case '5':
		cout << "Enter Trapezoid\n";
		do {
			parameter_1 = -1;
			cout << "Base A : ";
			cin >> parameter_1;
		} while (!(parameter_1 >=0));
		do {
			parameter_2 = -1;
			cout << "Base b : ";
			cin >> parameter_2;
		} while (!(parameter_2 >= 0));
		do {
			parameter_3 = -1;
			cout << "Height : ";
			cin >> parameter_3;
		} while (!(parameter_3 >=0));
		area = parameter_3 * ((parameter_1 + parameter_2) / 2.0);
		cout << "The area of Trapezoid is : " << area;
		break;
		//for exit
	case '6':
		cout << "The program is Exit";
		break;
	}
	cout << endl;
	}while(choice != '6');
	cout << endl;
	system("pause");
	return 0;
}
