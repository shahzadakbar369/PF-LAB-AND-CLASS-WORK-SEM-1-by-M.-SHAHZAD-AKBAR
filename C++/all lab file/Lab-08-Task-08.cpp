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
if(col==row2){

	int A[row][col], B[row2][col2], M[row][col2];
//input
	cout << "input for matrix A\n";
	for(int Out=0; Out<row; Out++){
		cout << "For row " << Out+1 <<endl;
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
//multiplation
cout << "---------Multiplication Matix is ---------" << endl;

for(int lop=0; lop<row; lop++){
	for(int Out=0; Out<col2; Out++){
		M[lop][Out] = 0;
		for(int in=0; in<col; in++){
			M[lop][Out] += A[lop][in] * B[in][Out];
		}
		cout << M[lop][Out] << " ";
	}
	cout << endl;
}

}
else{
	cout << endl << "Matrix dont multiply accoding to matrix addition rule ";
}
	return 0;
}


