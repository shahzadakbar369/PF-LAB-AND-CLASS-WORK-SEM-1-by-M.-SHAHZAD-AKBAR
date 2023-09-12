#include <iostream>
using namespace std;
int main() {
	int score1, score2, score3;
	float avg;
	cout << "Enter the golfer’s score for three games : \n";
	cin >> score1 >> score2 >> score3;
	avg = (score1 + score2 + score3) / 3.0;
	cout << "Average golfer scores is " << avg;

	cout << endl;
	system("pause");
	return 0;
}