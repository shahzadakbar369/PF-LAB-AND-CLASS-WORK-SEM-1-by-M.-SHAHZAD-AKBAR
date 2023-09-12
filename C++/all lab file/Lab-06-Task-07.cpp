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
	//even value 
	cout << "-----Even value-----\n";
	for(int Lop=0; Lop<array_size; Lop++){
		if(arr[Lop]%2==0){
			cout << arr[Lop] << " ";
		}
	}
	
}

