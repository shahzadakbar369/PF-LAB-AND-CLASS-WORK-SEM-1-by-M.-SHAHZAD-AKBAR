#include<iostream>
using namespace std;

int main() {
	int gross_sales_1, gross_sales_2, gross_sales_3,income_1,income_2,income_3;
	float average;
	cout << "Input three salesperson s gross sales for last week one by one\n";
	cin >> gross_sales_1 >> gross_sales_2 >> gross_sales_3;
	if ((gross_sales_1 > 0) && (gross_sales_2 > 0) && (gross_sales_3 > 0)) {

		income_1 = 200 + (gross_sales_1 * 0.09);
		income_2 = 200 + (gross_sales_2 * 0.09);
		income_3 = 200 + (gross_sales_3 * 0.09);
		average = (income_1 + income_2 + income_3) / 3.0;

		cout << "salesperson s earnings : " << income_1 << "\nsalesperson s earnings : " << income_2 << "\nsalesperson s earnings : " << income_3;
		cout << endl << "Average : " << average << endl;
		//max sales
		if (gross_sales_1 > gross_sales_2) {
			if (gross_sales_1 > gross_sales_3) {
				cout << "Max sales : " << gross_sales_1;
			}
			else {
				cout << "Max sales : " << gross_sales_3;
			}
		}
		else if (gross_sales_2 > gross_sales_3) {
			cout << "Max sales : " << gross_sales_2;
		}
		else
		{
			cout << "Max sales : " << gross_sales_3;
		}
		cout << endl;
		//min sales
		if (gross_sales_1 < gross_sales_2) {
			if (gross_sales_1 < gross_sales_3) {
				cout << "Min sales : " << gross_sales_1;
			}
			else {
				cout << "Min sales : " << gross_sales_3;
			}
		}
		else if (gross_sales_2 < gross_sales_3) {
			cout << "Min sales : " << gross_sales_2;
		}
		else
		{
			cout << "Min sales : " << gross_sales_3;
		}

	}
	else {
		cout << "incorrectly entered gross sales";
	}
	

	cout << endl;
	system("pause");
	return 0;
}
