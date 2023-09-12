#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	string movie_name;
	int adult_ticket, child_ticket, adult_over, price_child, price_adult, prince_over, net_profit, gross_profit;
	//input
	cout << "Movie name        \t";
	cin >> movie_name;
	cout << "Adult Tickets Sold \t";
	cin >> adult_ticket;
	cout << "Child Ticket Sold \t";
	cin >> child_ticket;
	cout << "Adults Above      \t";
	cin >> adult_over;
	//calculation of net profit
	price_child = child_ticket * 250;
	price_adult = (adult_ticket - adult_over) * 500;
	prince_over = adult_over * (500 - (500/100 * 10));
	net_profit = price_child + price_adult + prince_over;
	gross_profit = (net_profit / 100) * 20;
	//output
	cout << "Gross Box Office Profit \tRs." << gross_profit << endl;
	cout << "Net Box Office Profit   \tRs." << net_profit <<endl;
	cout << "Amount Paid to Distributor\tRs." << (net_profit-gross_profit) << endl;
	cout << endl;
	system("pause");
	return 0;
}