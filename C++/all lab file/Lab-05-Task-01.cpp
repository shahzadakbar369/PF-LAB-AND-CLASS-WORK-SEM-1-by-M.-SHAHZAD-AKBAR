#include<iostream>
using namespace std;

int main() {
	int max = 5;
	
	for(int outer_L=1; outer_L<=max; outer_L++){
		for(int inner_L=1; inner_L<=outer_L; inner_L++){
			cout <<"*";
		}
		cout << endl;
	}
	
	
	
	cout << endl;
	system("pause");
	return 0;
}
