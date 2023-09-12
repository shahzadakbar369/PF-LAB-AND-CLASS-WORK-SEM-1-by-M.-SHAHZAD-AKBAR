#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int classA, classB, classC,income_gen;

	cout << "Class A seats were sold : ";
	cin >> classA;
	cout << "Class B seats were sold : ";
	cin >> classB;
	cout << "Class C seats were sold : ";
	cin >> classC;
	 
	income_gen = (classA * 2000) + (classB * 1000) + (classC * 500);
	cout << "The amount of income generated " << income_gen;
	cout << endl;
	system("pause");
	return 0;
}