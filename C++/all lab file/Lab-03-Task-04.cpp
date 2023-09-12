#include<iostream>
using namespace std;

int main() {
	float mass, weight;

	cout << "Enter mass in kilograms : ";
	cin >> mass;
	
	weight = mass*9.8;

	cout << "weight : " << weight << " N\n";

	if (weight > 1000) {
		cout << "object is too heavy";
	}
	else if(weight < 1000){
		cout << "object is too light";
	}
	else{
		cout << "object is not too light not too heavy";
	}

	cout << endl;
	system("pause");
	return 0;
}
