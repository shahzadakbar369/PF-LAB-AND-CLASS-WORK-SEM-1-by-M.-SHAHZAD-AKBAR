#include<iostream>
using namespace std;

int main() {
	int average_increase, day;
	double per, population_size;
	do{
		cout << "Enter starting number of organism (starting form 2): ";
		cin >> population_size;
	}while(population_size < 2);
	
	do{
		cout << "Enter daily average_increase (in percenatge) : ";
		cin >> average_increase;

	}while(average_increase < 0);
	
	do{
		cout << "Enter number of days : ";
		cin >> day;
	}while(day < 1);
	
	

	for (int loop = 0; loop < day; loop++) {
		per = ((population_size / 100.0)*(average_increase));
		population_size += per;
		cout << "Day : " << loop+1 << " \t\tPopulation size " << population_size << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}
