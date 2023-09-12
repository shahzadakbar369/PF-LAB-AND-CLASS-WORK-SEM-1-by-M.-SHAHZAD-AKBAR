#include <iostream>

using namespace std;
int main() {
	float amount_purchased, commission_bought, amount_sold, commission_sold, profit;

	amount_purchased = 1000 * 32.87;
	commission_bought = amount_purchased * 0.02;

	amount_sold = (1000 * ((float)33/92));
	commission_sold = amount_sold * 0.02;
	profit = (amount_sold + commission_sold) - (amount_purchased + commission_bought);

	cout << "Amount of money Kathryn paid for the stock : " << (amount_purchased+ commission_bought) << endl;
	cout << "Amount of commission Kathryn paid her broker when she bought : " << commission_bought << endl;
	cout << "Amount that Kathryn sold the stock : " << (amount_sold + commission_sold) << endl;
	cout << "Amount of commission Kathryn paid her broker when she sold : " << commission_sold << endl;
	if (profit > 0) {
		cout << "The profit of Kathryn " << profit;
	}
	else {
		cout << "Kathryn lost money on transaction" << profit;
	}

	cout << endl;
	system("pause");
	return 0;
}
