#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	int num_1, num_2, sum, correct=0, question=0;
	cout << "For exit enter -1" << endl;
	do {
		num_1 = ((rand()+time(0))%100);
		num_2 = ((rand()+time(0))%100);
		cout << num_1 << " + " << num_2 << " = ";
		cin >> sum;
		cout << endl;
		if(sum!=-1) {
				if (sum == (num_1 + num_2)) {
					correct++;
				}
				question++;
			}
		
	} while (sum != -1);
	cout << correct << "Answers correct out of "<< question <<" question";
	cout << endl;
	system("pause");
	return 0;
}
