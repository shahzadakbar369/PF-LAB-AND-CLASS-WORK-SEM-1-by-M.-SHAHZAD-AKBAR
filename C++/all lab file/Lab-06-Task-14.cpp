#include<iostream>
#include<cmath>
using namespace std;

int presentValue(int , float , float );

int main(){
	float r,y;
	int f;
	cout << "Enter future value Rs. ";
	cin >> f;
	cout << "Annual interest rate : ";
	cin >> r;
	cout << "number of years : ";
	cin >> y;
	
	cout << "\n-----Result----\n";
	cout << "The amount that you need to deposit today : " <<presentValue(f,r,y);
	
	return 0;
}

int presentValue(int f, float r, float y){
	int p;
	p = f/pow((1+r),y);
	return p;
}

