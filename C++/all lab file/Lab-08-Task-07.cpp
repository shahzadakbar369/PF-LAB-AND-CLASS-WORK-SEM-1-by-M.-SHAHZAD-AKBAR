#include<iostream>
#include<conio.h>
using namespace std;
const int col=3;

void insertSort(int arr[][col], int row){
	int O,i,temp,j,k;
	bool choice = false;
	for(O=0; O< row; O++){
		for(i=0; i<col; i++){
			//cout << endl << "----------------";
			temp = arr[O][i];
			//cout << endl << "O " << O;
			//cout << endl << "i " << i;
			//cout << endl << "t " << temp;
			if(!(O==0&&i==0)){
				for(k=O; k>=0; k--){
					//cout << endl << "k " << k;
					for(j=(O==k?i:col);(arr[k][j-1]>temp&&j>0); j--){
						//cout << endl << "j " << j << " j-1 " << j-1;
						choice = true;
						if(j==col){
							arr[k+1][0]=arr[k][j-1];
						}
						else{
							arr[k][j]=arr[k][j-1];
						}
					}
					if(!(arr[k][j-1]>temp) || k==0 ){
						//cout <<"in break";
						break;
					}
					
				}
				//cout << endl <<" k " << k << " j " << j << endl; 
				if(choice){
					//cout << endl << "K+1 " << k << " j " << j;
					if(j==col)j-=row;
					choice = false;
					arr[k][j] = temp;	
				}
			}
		}
	}
	cout << endl;
}
	
int main(){
	int row;
	cout << "Enter row : ";
	cin >> row;
	
	int arr[row][col];
	for(int O_lop=0; O_lop<row; O_lop++){
		cout << "Enter for " << O_lop+1 << " row\n";
		for(int i_lop=0; i_lop<col; i_lop++){
			cout << "Enter " << i_lop+1 << " element : ";
			cin >> arr[O_lop][i_lop];
		}
	}
	
	insertSort(arr, row);
	
	for(int O_lop=0; O_lop<row; O_lop++){
		for(int i_lop=0; i_lop<col; i_lop++){
			cout << arr[O_lop][i_lop] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
