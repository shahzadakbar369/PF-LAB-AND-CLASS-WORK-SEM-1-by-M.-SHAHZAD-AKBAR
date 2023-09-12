#include<iostream>
using namespace std;

int main(){
	int array_size=10, min=0, max=0;
	int arr[array_size];
	for(int Lop=0; Lop<array_size; Lop++){
		cout << "Enter " << Lop+1 << " element : ";
		cin >> arr[Lop];
		if(arr[min]>arr[Lop]){
			min = Lop;
		}
		else if(arr[max] < arr[Lop]){
			max = Lop;
		}
	}
	cout << "------Result------\n";
	cout << "Min value of array is : " << arr[min] << endl;
	cout << "Max value of array is : " << arr[max] << endl;
}
