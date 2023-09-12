#include<iostream>
using namespace std;

double calculateRetail(float , float);

int main(){
	int cost, per;
	do{
		cout << "Enter an item wholesale cost : ";
		cin >> cost;
	}while(cost <0);
	
	do{
		cout << "Enter markup percentage : ";
		cin >> per; 
	}while(per < 0);
	
	cout << "\n------Result-----\n";
	cout << "items retail price : " << calculateRetail(cost, per);
	return 0;
}

double calculateRetail(float cost, float per){
	double retail_price;
	retail_price = (cost * (per/100)) + cost;
	return retail_price;
}

