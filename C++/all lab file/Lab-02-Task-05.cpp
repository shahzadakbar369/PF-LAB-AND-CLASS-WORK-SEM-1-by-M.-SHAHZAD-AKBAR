#include <iostream>
#include<cmath>
using namespace std;
int main() {
	double angle1, angle2, x;
	
	cout <<"enter two value of angel in radian : \n";
	cin >> angle1 >> angle2;

	angle1 = sin(angle1);
	angle2 = cos(angle2);

	x = angle1 + angle2;
	cout << "the sum of angel is " << x << endl;


	system("pause");
	return 0;
}