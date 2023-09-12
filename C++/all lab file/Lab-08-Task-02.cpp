#include<iostream>
using namespace std;

int main(){
	double min, max, sum;
	bool only_first = true;
	double food[3][7]; 
	
	for(int O_lop=0; O_lop<3; O_lop++){
		cout << "\tEnter food for monkey " << O_lop+1 << endl;
		for(int i_lop=0; i_lop<7; i_lop++){
			do{
				cout << "Enter for " << i_lop+1 << " day : ";
				cin >> food[O_lop][i_lop];	
			}while(food[O_lop][i_lop] < 0);
			
			if(only_first){
				min = food[0][0];
				max = food[0][0]; 
				only_first = false;
			}
			if(min > food[O_lop][i_lop]){
				min = food[O_lop][i_lop];
			}
			else if(max < food[O_lop][i_lop]){
				max = food[O_lop][i_lop];
			}
		}
	}
	cout << endl;
	for(int i_lop=0; i_lop<7; i_lop++){
		sum =0;
		for(int O_lop=0; O_lop<3; O_lop++){
			sum += food[O_lop][i_lop];
		}
		cout << "Average amount of food eaten "<< i_lop+1 <<" day by the whole family of monkeys : " << sum/3 << endl;
	}
	
	cout << "The least amount of food : "<< min << endl;
	cout << "The greatest amount of food : " << max;
	return 0;
}


