#include<iostream>
using namespace std;

int main() {
	double level =1.5;

	cout << "Year \t Level\n--------------------\n";
	for (int y = 0; y < 25; y++) {
		level += 1.5;
		cout << (2019 + y) << "\t" << level << endl;
	}


	cout << endl;
	system("pause");
	return 0;
}
