#include<iostream>
using namespace std;

int main(){
	int size, row, col, shift;
		cout << "Enter size of map between 5 and 9 : ";
	
		cout << "x y-postion: ";
		cin >> row;
	
		cout << "x x-postion: ";
		cin >> col;
	

	do{
		for(int loop=0; loop<size; loop++){
			for(int loop2=1; loop2<size; loop2++){
					if((loop == row) && (loop2 == col)){
						cout << " x ";
					}
					else{
						cout << " _ ";
					}
			}
			cout << endl;
		}
		cout << "1 Update treasurer coordinates"<<endl;
		cout <<"2Shift X left or right" << endl;
		cout <<"3Shift X up or down"<< endl;
		cout << "4Exit Program" << endl;
	
int a;
int k;
			cin >> a;
		
		switch(a){
			case 1:
					cout << "x y-postion" << endl;
		cin >> row;
	
		cout << "x x-postion: ";
		cin >> col;
				break;
				
			case 2:
					cout << "enter value to move left or right" << endl;
					cin >> k;
				col=col+k;
					break;
			case 3:
					cout << "enter value to move up or down" << endl;
					cin >> k;
				
				row=row+k;
				break;
		}
	}while(a != 4);
	cout << "game end";
	
	
	return 0;
}
