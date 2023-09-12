#include<iostream>
using namespace std;

int main(){
	int array_size=10, temp;
	int arr[array_size];
	for(int Lop=0; Lop<array_size; Lop++){
		cout << "Enter " << Lop+1 << " element : ";
		cin >> arr[Lop];
	}

	for(int Lop=0; Lop<array_size-1; Lop+=2){
		temp = arr[Lop];
		arr[Lop] = arr[Lop+1];
		arr[Lop+1] = temp;
	}
	cout << "------Result------\n";
	for(int Lop=0; Lop<array_size; Lop++){
		cout << arr[Lop] << " ";
	}
}
