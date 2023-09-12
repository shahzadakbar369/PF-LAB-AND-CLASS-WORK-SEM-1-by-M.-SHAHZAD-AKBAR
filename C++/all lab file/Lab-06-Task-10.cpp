#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	int array_size=5, match=0;
	int lottery[array_size], user_lottery[array_size];
	
	cout << "Enter your lottery number" << endl;
	for(int Lop=0; Lop<array_size; Lop++){
		lottery[Lop] = ((rand()+time(0))%10);
		
		cout <<"Enter " << Lop+1 << " number : ";
		cin >> user_lottery[Lop];
		if(user_lottery[Lop] == lottery[Lop]){
			match++;
		}
	}
	cout << "\t-------Result------\n";
	cout << "\tLottery number are : ";
	for(int Lop=0; Lop<array_size; Lop++){
		cout << lottery[Lop] << " ";
	}
	if(match == array_size){
		cout << "\n\tGrand prize winner";
	}
	else{
		cout << "\n\tNumber of matching digits are : " << match;
	}
	
	return 0;
}

