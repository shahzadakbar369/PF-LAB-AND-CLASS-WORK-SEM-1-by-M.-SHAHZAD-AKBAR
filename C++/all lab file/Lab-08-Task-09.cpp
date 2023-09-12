#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int row,col,row2,col2;
	cout << "Enter row for matrix A : ";
	cin >> row; 
	cout << "Enter col for matrix A : ";
	cin >> col; 
	
	cout << "Enter row for matrix B : ";
	cin >> row2; 
	cout << "Enter col for matrix B : ";
	cin >> col2;
if(row == row2 && col==col2){

	int A[row][col], B[row2][col2];
//input
	cout << "input for matrix A\n";
	for(int Out=0; Out<row; Out++){
		cout << "For row " << Out+1<<endl;
		for(int in=0; in<col; in++){
			cout << "Enter "<<in+1<<" element ";
			cin >> A[Out][in];
		}
	}
	cout << "input for matrix B\n";
	for(int Out=0; Out<row2; Out++){
		cout << "For row " << Out+1 <<endl;
		for(int in=0; in<col2; in++){
			cout << "Enter "<<in+1<<" element ";
			cin >> B[Out][in];
		}
	}
//addition
cout << "---------Addition Matix is ---------" << endl;
	for(int Out=0; Out<row; Out++){
		for(int in=0; in<col; in++){
			cout << A[Out][in]+B[Out][in] << "  ";
		}
		cout << endl;
	}
}
else{
	cout << endl << "Matrix dont added accoding to matrix addition rule ";
}
	return 0;
}


