#include<iostream>
using namespace std;
const int col=3;

int getTotal(int [][col], int );
double getAverage(int [][col], int);
int getRowTotal(int [][col], int);
int getColumnTotal(int [][col], int, int);
int getHighestInRow(int [][col], int);
int getLowestInRow(int [][col], int);

int main(){
	int row, choice, specfic;
	cout << "Enter row : ";
	cin >> row;
//input	
	int arr[row][col];
	for(int O_lop=0; O_lop<row; O_lop++){
		cout << "Enter for " << O_lop+1 << " row\n";
		for(int i_lop=0; i_lop<col; i_lop++){
			cout << "Enter " << i_lop+1 << " element : ";
			cin >> arr[O_lop][i_lop];
		}
	}
//function
	cout << "1 - getTotal\n2 - getAverage\n3 - getRowTotal\n4 - getColumnTotal\n5 - getHighestInRow\n6 - getLowestInRow\n7 - Exit\n";
	do{
	
		choice = 0;
		cin >> choice;
		switch(choice){
			case 1:
				cout << "Total value in array : " << getTotal(arr, row) << endl;
				break;
			case 2:
				cout << "Average of array is : " << getAverage(arr, row) << endl;
				break;
			case 3:
				specfic = -1;
				do{
				cout << "Enter row th you want total (1- "<<row <<") : ";
				cin >> specfic;
				}while(!(specfic >=1 && specfic <= row));
				specfic--;
				cout << "Total value in "<<specfic+1 <<" row of array : " << getRowTotal(arr, specfic) << endl;
				break;
			case 4:
				specfic = -1;
				do{
				cout << "Enter column that you want total (1- "<<col <<") : ";
				cin >> specfic;
				}while(!(specfic >=1 && specfic <= col));
				specfic--;
				cout << "Total value in "<<specfic+1 <<" column of array : " << getColumnTotal(arr,row ,specfic) << endl;
				break;
			case 5:
				specfic = -1;
				do{
				cout << "Enter row (1- "<<row <<") : ";
				cin >> specfic;
				}while(!(specfic >=1 && specfic <= row));
				specfic--;
				cout << "Highest value in following row is : " << getHighestInRow(arr, specfic) << endl;
				break;
			case 6:
				specfic = -1;
				do{
				cout << "Enter row (1- "<<row <<") : ";
				cin >> specfic;
				}while(!(specfic >=1 && specfic <= row));
				specfic--;
				cout << "Lowest value in following row is : " << getLowestInRow(arr, specfic)  << endl;
				break;
			case 7:
				cout << "program Exit";
				break;
			default:
				cout << "\nOption you chosen doesnt exist\n";
				break;												
		}
	}while(choice != 7);

	return 0;
}

int getTotal(int arr[][col], int row){
	int sum =0;
	for(int O_lop=0; O_lop<row; O_lop++){
		for(int i_lop=0; i_lop<col; i_lop++){
			sum+= arr[O_lop][i_lop];
		}
	}
	return sum;
}


double getAverage(int arr[][col], int row){
	return (getTotal(arr, row)/(col*row));
}
	
	

int getRowTotal(int arr[][col], int row){
	int sum =0;
		for(int i_lop=0; i_lop<col; i_lop++){
			sum+= arr[row][i_lop];
		}
	return sum;
}

int getColumnTotal(int arr[][col], int row, int specfic){
	int sum =0;
		for(int i_lop=0; i_lop<row; i_lop++){
			sum+= arr[i_lop][specfic];
		}
	return sum;
}

int getHighestInRow(int arr[][col], int row){
	int highest = arr[row][0];
		for(int i_lop=0; i_lop<col; i_lop++){
			if(highest < arr[row][i_lop]){
				highest = arr[row][i_lop];
			}
		}
	return highest;
}

int getLowestInRow(int arr[][col], int row){
	int lowest = arr[row][0];
		for(int i_lop=0; i_lop<col; i_lop++){
			if(lowest > arr[row][i_lop]){
				lowest = arr[row][i_lop];
			}
		}
	return lowest;
}

