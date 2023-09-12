#include <iostream>
using namespace std;
int main() {
	short int test= 32767;
	cout << "The value of variable is : " << test << endl;
	
	test = test+1;
	cout << "The value of variable after adding 1 is : " << test << endl;

	test--;
	cout << "The value of variable after subtract 1 is : " << test << endl;


	cout << endl;
	system("pause");
	return 0;
}