#include<iostream>
using namespace std;

int main(){
	int array_size=12, min=0, max=0;
	bool again = false;
	double arr[array_size],total=0;
	
	for(int Lop=0; Lop<array_size; Lop++){
		cout << "Enter rainfall for " << Lop+1 << " month : ";
		do{
			if(again){
				cout << "Again : ";
			}
			cin >> arr[Lop];
			again = true;
		}while(arr[Lop] < 0);
		again = false;
		
		total += arr[Lop];
		if(arr[min]>arr[Lop]){
			min = Lop;
		}
		else if(arr[max] < arr[Lop]){
			max = Lop;
		}
	}
	cout << "------Result------\n";
	cout << "Total rainfall for the year : " << total << endl;
	cout << "The average monthly rainfall : " << total/array_size << endl;
	cout << "The highest rainfall : " << max+1 << endl;
	cout << "The lowest rainfall : " << min+1 << endl;
	
}
