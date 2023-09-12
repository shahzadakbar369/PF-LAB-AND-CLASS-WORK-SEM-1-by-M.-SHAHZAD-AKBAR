#include <iostream>
using namespace std;
int main() {
	int m_a_c, credit_used;
	cout << "Enter maximum amount of credit : ";
	cin >> m_a_c;
	cout << "Enter amount of credit used : ";
	cin >> credit_used;
	if (credit_used <= m_a_c) {
		cout << "remaining credit : " << (m_a_c - credit_used);
	}
	cout << endl;
	system("pause");
	return 0;
}
