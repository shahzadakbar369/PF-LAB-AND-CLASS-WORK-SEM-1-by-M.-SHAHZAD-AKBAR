#include<iostream>
#include<conio.h>
using namespace std;
template<class T>

void insertSort(T arr[], int size){
	T temp;
	int i_lop;
	if(size<2)return;
	
	for(int O_lop=1; O_lop<size; O_lop++){
		temp = arr[O_lop];
		for(i_lop=O_lop ; arr[i_lop-1] > temp && i_lop >0; i_lop--){
			arr[i_lop] = arr[i_lop-1];
		}
		arr[i_lop] = temp;
	}
}

int main(){
	int size;
	cout << "Enter size of array : ";
	cin >> size;
	int arr[size];
	for(int lop=0; lop<size; lop++){
		cout << "Enter " << lop+1 << " element : ";
		cin >> arr[lop];
	}
	insertSort(arr, size);
	for(int lop=0; lop<size; lop++){
		cout << arr[lop] << " ";
	}
	
	return 0;
}


