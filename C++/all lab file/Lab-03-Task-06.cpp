#include<iostream>
using namespace std;

int main() {
	int number_cheques, balance, fee=50;

	cout << "Enter the balance of the account : ";
	cin >> balance;
	if (balance >= 0) {
	do{
		number_cheques =-1;
		cout << "Enter the number cheques : ";
		cin >> number_cheques;
	}while(!(number_cheques>=0));
	
		if ((balance - fee) < 15000) {
			fee += 100;
		}
		if (number_cheques < 20) {
			fee += (10 * number_cheques);
		}
		else if (number_cheques >= 20 && number_cheques <= 39) {
			fee += (8 * number_cheques);
		}
		else if (number_cheques >= 40 && number_cheques <= 59) {
			fee += (6 * number_cheques);
		}
		else if (number_cheques >= 60) {
			fee += (4 * number_cheques);
		}

		if ((balance - fee) >= 0) {
			cout << "Bank service fee : " << fee;
		}
		else {
			cout << "account is overdrawn";
		}
	}
	else
	{
		cout << "account is overdrawn";
	}

	cout << endl;
	system("pause");
	return 0;
}
