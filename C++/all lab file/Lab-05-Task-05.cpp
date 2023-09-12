#include<iostream>
using namespace std;

int main() {
	int max = 5;
	
	for(int outer_L=5; outer_L>=1; outer_L--){
		cout << "\t";
		for(int inner_L=1; inner_L<=9; inner_L++){
			if(inner_L >= outer_L && inner_L <= (max + max - outer_L) ){
				cout << max-outer_L+1;
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}

		
	cout << endl;
	system("pause");
	return 0;
}
