#include<iostream>
using namespace std;

int main(){
	int array_size,temp, middle;
	//size of array
		cout << "Enter size of array : ";
		cin >> array_size;
	
	int arr[array_size];
	for(int Lop=0; Lop<array_size; Lop++){
		cout << "Enter " << Lop+1 << " element : ";
		cin >> arr[Lop];
	}
	//swaip
	temp = arr[0];
	arr[0] = arr[array_size-1];
	arr[array_size-1] = temp;
	cout << "-----Result-----\n";
	for(int Lop=0; Lop<array_size; Lop++){
		cout << arr[Lop] << " ";
	}
}

