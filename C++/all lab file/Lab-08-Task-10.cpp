#include<iostream>
using namespace std;

int main(){
	int row,col;
	cout << "Enter row for matrix A : ";
	cin >> row; 
	cout << "Enter col for matrix A : ";
	cin >> col; 
	int A[row][col];
	int T[col][row];
//input	
	cout << "input\n";
	for(int Out=0; Out<row; Out++){
		cout << "For row " << Out+1 <<endl;
		for(int in=0; in<col; in++){
			cout << "Enter "<<in+1<<" element ";
			cin >> A[Out][in];
			T[in][Out]=A[Out][in];
		}
	}
//transpose
	for(int Out=0; Out<col; Out++){
		for(int in=0; in<row; in++){
			cout << T[Out][in] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}

