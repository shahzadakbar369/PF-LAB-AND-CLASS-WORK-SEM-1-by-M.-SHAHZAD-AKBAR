#include<iostream>
using namespace std;

int main() {
	int charges=2500,year = 1;

	cout << "Charges for 6 year" << endl << "-----------------" << endl;
		while(year <= 6) {
			charges += charges * 0.04;
			cout << "Rates " <<charges << " for year " << year << endl;
			year++;

		}


	cout << endl;
	system("pause");
	return 0;
}
