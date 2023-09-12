#include<iostream>
using namespace std;

int main() {
	int input_num, sum=0,inc=0;

	do {
		cout << "Enter number : ";
		cin >> input_num;
	} while (!(input_num >0));
	
	

	while(inc != input_num){
			inc++;
			sum += inc;
	}

	cout << "The sum form 1 to "<< input_num <<" : " << sum;


	cout << endl;
	system("pause");
	return 0;
}
