#include<iostream>
using namespace std;

int main() {
	int account_number, balance, items_charges, credit, credit_limit, new_balance;
	cout << "Enter account number : ";
	cin >> account_number;
	
	cout << "Enter Balance at the beginning of the month : ";
	cin >> balance;
	
	cout << "Enter charges of all items : ";
	cin >> items_charges;
	
	cout << "Enter total of all credits applied  : ";
	cin >> credit;
	
	cout << "Enter credit limit : ";
	cin >> credit_limit;
	
	new_balance = balance + items_charges-credit;


	if(new_balance > credit_limit){
		cout << "Account number : " << account_number << endl;
		cout << "New balance : " << balance << endl;
		cout << "Credit limit : " << credit_limit << endl;
		cout << "Credit Limit Exceeded.";
	}
	else{
		cout << "Under Limit";
	}
	
	
	cout << endl;
	system("pause");
	return 0;
}
