#include <iostream>

using namespace std;
int main() {
	int amount,n=100, div;
	bool skip= 0;
	cout << "Enter amount : ";
	cin >> amount;

	do{
		div = 5 * n;
		if((amount / div) != 0){
			cout << div << " rupee note " << amount / div << endl;
		}
		amount %= div;
		if(skip){
			n = (n/2);
			if(n == 5){
				n--;
			}
		}
		else{
			n = (n/5);
			skip = 1;
		}
	}while(n != 0);
	if(amount != 0){
		cout << "1 rupee note " << amount;
	}
	cout << endl;
	system("pause");
	return 0;
}
