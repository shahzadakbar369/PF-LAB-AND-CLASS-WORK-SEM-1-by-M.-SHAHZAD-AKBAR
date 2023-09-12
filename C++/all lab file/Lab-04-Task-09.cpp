#include<iostream>
using namespace std;

int main() {
	int overs=35, score=188;
	cout << "Overs bowled \t 6.25 \t 7 \t 8 \t 9 \t 10\nProjected Score\n";
	while (overs<= 50) {
		cout << "In " << overs << " over\t" <<int(overs * 6.25) << "\t" << overs * 7 << "\t" << overs * 8 << "\t" << overs * 9 << "\t" << overs * 10 << "\t"<<endl;

		overs += 5;
	}

	cout << endl;
	system("pause");
	return 0;
}
