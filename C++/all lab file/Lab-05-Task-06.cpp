#include<iostream>
using namespace std;

int main() {
	
	for(int outer_L=5; outer_L >=1; outer_L--){
		for(int inner_L=1; inner_L <=11; inner_L++){
			if(inner_L > outer_L && inner_L <= (11 - outer_L) && outer_L< 5){
				cout << " ";
				continue;
			}
			cout << "*";
		}	
		cout << endl;
	}
	for(int outer_L=2; outer_L <=5; outer_L++){
		for(int inner_L=1; inner_L <=11; inner_L++){
			if(inner_L > outer_L && outer_L<5  && inner_L <= (11-outer_L)){
				cout << " ";
				continue;
			}
			cout << "*";
		}	
		cout << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}


