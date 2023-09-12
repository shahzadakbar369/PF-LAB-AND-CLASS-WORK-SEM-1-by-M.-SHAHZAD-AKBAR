#include<iostream>
using namespace std;
void showinfo();
double getCups();
double cupsToOunces(double cups);

int main(){
	showinfo();
	cout << "Fluid ounces "<< cupsToOunces(getCups()) <<" for given cup";
	
	
	return 0;
}

void showinfo(){
	cout << "\tConverter\nThe following program convert cups to fluid ounces\nOne cup is equal to 8 fluid ounces\n\n";
}

double getCups(){
	double cups;
	cout << "Enter number of cups : ";
	cin >> cups;
	
	return cups;
}

double cupsToOunces(double cups){
	return cups*8;
}
