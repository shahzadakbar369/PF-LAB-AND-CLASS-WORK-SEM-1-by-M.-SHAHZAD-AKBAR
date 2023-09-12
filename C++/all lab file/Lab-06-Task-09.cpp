#include<iostream>
using namespace std;

int main(){
	int M,N,a,b;
	//size of array
	cout << "Enter size A array : ";
	cin >> M;
	int arr_A[M];
	cout << "\tEnter in ascending order\n";
	for(int Lop=0; Lop<M; Lop++){
		cout << "Enter A " << Lop+1 << " element : ";
		cin >> arr_A[Lop];
	}
	
	cout << "Enter size B array : ";
	cin >> N;
	cout << "\tEnter in descending order\n";
	int arr_B[N];
	for(int Lop=0; Lop<N; Lop++){
		cout << "Enter B " << Lop+1 << " element : ";
		cin >> arr_B[Lop];
	}
	//third array
	int arr_C[M+N];
	//merge
	a=0;
	b=N-1;
	cout << "----Result-----\n";
	for(int Lop=0; Lop<M+N; Lop++){
		if(((arr_A[a] < arr_B[b])&&a<M) || b<0){
			arr_C[Lop] = arr_A[a];
			a++;
		}
		else if(b>=0 || a>=M){
			arr_C[Lop] = arr_B[b];
			b--;	
		}
		cout << arr_C[Lop] << " ";
	}
	
}

