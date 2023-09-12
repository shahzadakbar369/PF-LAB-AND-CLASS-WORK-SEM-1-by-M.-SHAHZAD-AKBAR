#include<iostream>
using namespace std;

int main(){
	int array_size,temp, middle;
	//size of array
	do{
		cout << "Enter size of array(Only Odd) : ";
		cin >> array_size;
	}while(array_size%2==0);
	
	int arr[array_size];
	for(int Lop=0; Lop<array_size; Lop++){
		cout << "Enter " << Lop+1 << " element : ";
		cin >> arr[Lop];
	}
	//exchange
	middle = array_size/2;
	temp = arr[0];
	arr[0] = arr[middle];	
	arr[middle] = arr[array_size-1];
	arr[array_size-1] = temp;
	
	cout << "------Result------\n";
	for(int Lop=0; Lop<array_size; Lop++){
		cout << arr[Lop] << " ";
	}
}

