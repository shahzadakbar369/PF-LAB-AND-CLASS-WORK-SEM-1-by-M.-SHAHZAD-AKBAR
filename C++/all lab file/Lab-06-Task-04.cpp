#include<iostream>
using namespace std;

int main(){
	int array_size, temp,Lop=0,Lop2;
	//size of array
	cout << "Enter size of array : ";
	cin >> array_size;
	int arr[array_size];
	//I/P in array
	for(int Lop=0; Lop<array_size; Lop++){
		cout << "Enter " << Lop+1 << " element : ";
		cin >> arr[Lop];
	}
	//reverse
	Lop2=array_size-1;
	while(Lop<(array_size/2)){
		temp = arr[Lop];
		arr[Lop] = arr[Lop2];
		arr[Lop2] = temp;
		Lop++;
		Lop2--;
	}
	
	cout << "------Result------\n";
	for(int Lop=0; Lop<array_size; Lop++){
		cout << arr[Lop] << " ";
	}
}

