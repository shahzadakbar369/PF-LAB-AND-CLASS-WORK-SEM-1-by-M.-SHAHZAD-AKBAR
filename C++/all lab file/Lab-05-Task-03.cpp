#include<iostream>
using namespace std;

int main() {
	int max = 5;
	
	for(int outer_L=max; outer_L>=0; outer_L--){
		
		for(int inner_L=1; inner_L<=max; inner_L++){
			if(inner_L <= (max-outer_L)){
				cout << " ";	
			}
			else{
				cout << "*";
			}
		}
		cout << endl;
	}
	
	cout << endl;
	system("pause");
	return 0;
}  
