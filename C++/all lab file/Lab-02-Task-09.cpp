#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	string month1, month2, month3;
	float rain_month1, rain_month2, rain_month3;
	cout << "Enter month name : ";  
	cin >> month1;
	cout << "rain fall in milimeter : ";
	cin >> rain_month1;

	cout << "Enter month name : ";
	cin >> month2;
	cout << "rain fall in milimeter : ";
	cin >> rain_month2;

	cout << "Enter month name : ";
	cin >> month3;
	cout << "rain fall in milimeter : ";
	cin >> rain_month3;
	

	cout << "The average rain for " << month1 << "," << month2 << " & " << month3 << " is : "<< (rain_month1+ rain_month2+rain_month3)/3 <<" millimeter.";

	cout << endl;
	system("pause");
	return 0;
}