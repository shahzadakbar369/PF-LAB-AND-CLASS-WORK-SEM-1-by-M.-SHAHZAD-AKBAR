#include<iostream>
using namespace std;

int main() {
	int balance, months, inp_deposit, inp_withdrawn, deposit=0, withdrawn=0, monthaly_interst, total_interest=0;
	float annual_interest;

	cout << "Enter annual interest rate : ";
	cin >> annual_interest;
	do{
		cout << "Enter the starting balance : ";
		cin >> balance;
	}while(balance < 0);
	
		cout << "Enter the number of months : ";
		cin >> months;
		
		for (int loop = 1; loop <= months; loop++) {
			cout << "For " << loop << " month\n";
			do{
				inp_deposit=-1;
				cout << "Enter the amount deposited into the account during the month : ";
				cin >> inp_deposit;
			}while(inp_deposit < 0);
			
			balance += inp_deposit;
			deposit += inp_deposit;
	
			do{
				cout << "Enter the amount withdrawn into the account during the month : ";
				cin >> inp_withdrawn;
			}while(inp_withdrawn < 0);
		
			balance -= inp_withdrawn;
			if(balance < 0){
				break;
			}
			withdrawn += inp_withdrawn;
			monthaly_interst = balance*(annual_interest / 12);
			total_interest += monthaly_interst;
			balance += monthaly_interst;
			cout << endl;
			if(balance < 0){
				break;
			}
		}
		
		if(balance >= 0){
			cout << "Ending balance : " << balance << endl;
			cout << "Total amount deposits : " << deposit << endl;
			cout << "Total amount withdraws : " << withdrawn << endl;
			cout << "Total interest earned : " << total_interest << endl;
		}
		else{
			cout << "Account has been closed" << endl;
		}


	cout << endl;
	system("pause");
	return 0;
}
