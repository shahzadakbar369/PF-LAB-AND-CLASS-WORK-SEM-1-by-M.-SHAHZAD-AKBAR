#include<iostream>
using namespace std;

int main(){
	int array_size,temp, rotate;
	//size of array
	cout << "Enter size of array : ";
	cin >> array_size;
	int arr[array_size];
	//I/P in array
	for(int Lop=0; Lop<array_size; Lop++){
		cout << "Enter " << Lop+1 << " element : ";
		cin >> arr[Lop];
	}
	//rotate
	cout << "How much rotation you want : ";
	cin >> rotate;
	for(int R_lop=1; R_lop<=rotate; R_lop++){
		for(int Lop=0; Lop<array_size-1; Lop++){
			temp = arr[Lop+1];
			arr[Lop+1] = arr[Lop];
			arr[Lop] = temp;
		}
	}

	
	
	cout << "------Result------\n";
	for(int Lop=0; Lop<array_size; Lop++){
		cout << arr[Lop] << " ";
	}
}

