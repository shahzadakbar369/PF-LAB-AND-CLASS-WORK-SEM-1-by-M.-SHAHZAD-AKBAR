#include<iostream>
using namespace std;

int main() {
	const int acre_sq = 43560;
	cout << "Number of acres in the tract of land with 389,767 square feet is " << (float)389767/acre_sq;

	cout << endl;
	system("pause");
	return 0;
}
