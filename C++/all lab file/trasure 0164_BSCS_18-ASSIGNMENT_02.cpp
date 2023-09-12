#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int size, intial_row, intial_col, shift;
	char choice;
	//input 
	do{
		cout << "Enter size of map between 5 and 9 : ";
		cin >> size;
		cout << endl;
	}while(size<5 || size >9);
	
	do{
		cout << "Initial location of x (row): ";
		cin >> intial_row;
		cout << endl;
	}while(intial_row>size || intial_row<1);
	
	 do{
		cout << "Initial location of x (coloum): ";
		cin >> intial_col;
		cout << endl;
	}while(intial_col>size || intial_col<1);
	//draw pattern
	do{
		for(int L=1; L<=size; L++){
				cout << "(" << L << ") ";
			for(int i=1; i<=size; i++){
					if((L == intial_row) && (i == intial_col)){
						cout << "X ";
					}
					else{
						cout << "_ ";
					}
			}
			cout << endl;
		}
		cout << "(1) Update treasurer coordinates (row/column).\n(2) Shift X left or right\n(3) Shift X up or down\n(4) Exit Program\n";
		//choice validation 
		do{
			cout << "Select : ";
			choice = _getche();
			cout << endl;
		}while(choice >'4' || choice <'1');
		
		switch(choice){
			case '1':
					do{
						cout << "Initial location of x (row): ";
						cin >> intial_row;
						cout << endl;
					}while(intial_row>size || intial_row<1);
	
	 				do{
						cout << "Initial location of x (coloum): ";
						cin >> intial_col;
						cout << endl;
					}while(intial_col>size || intial_col<1);
				break;
				
			case '2':
				do{
					cout << "negative (-) for left or postive (+) for right : ";
					cin >> shift;
				}while((intial_col+(shift))>size || intial_col+(shift)<1);
				intial_col+=shift;
				cout << endl << "new value is " << intial_col << endl;
				break;
			case '3':
				do{
					cout << "negative (-) for up or postive (+) for down : ";
					cin >> shift;
				}while(intial_row+(shift)>size || intial_row+(shift)<1);
				
				intial_row+=shift;
				cout << endl << "new value is " << intial_row << endl;
				break;
			case '4':
				cout << "Exiting Program";
				break;
		}
	}while(choice != '4');
	
	
	
	return 0;
}
