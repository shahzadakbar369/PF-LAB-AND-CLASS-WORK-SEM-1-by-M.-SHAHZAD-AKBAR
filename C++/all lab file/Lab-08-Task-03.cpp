#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main(){
	int month = 3, day = 30,sum=0, max=0;
	char weather[3][30];
	string month_name[] = {"June", "July", "August"}; 
	int R[3]={0,0,0},C[3]={0,0,0},S[3]={0,0,0};
	
	cout << "weather record\nR - rainy\nC - cloudy\nS - sunny\n";
	for(int O_lop=0; O_lop<month; O_lop++){
		cout << "\t\tEnter data for " << month_name[O_lop] << " month" << endl;
		for(int i_lop=0; i_lop<day; i_lop++){
			do{
				cout << "Enter for day "<<i_lop+1 << " : "; 
				weather[O_lop][i_lop] = _getche();
				cout << endl;
			}while(weather[O_lop][i_lop] !='R' && weather[O_lop][i_lop] != 'C' && weather[O_lop][i_lop] != 'S');
			
			if(weather[O_lop][i_lop]=='R'){
				R[O_lop]++;
			}
			else if(weather[O_lop][i_lop] != 'C'){
				C[O_lop]++;
			}
			else{
				S[O_lop]++;
			}
		}
	}
	cout << "-------Report--------"<< endl;
	for(int O_lop=0; O_lop<3; O_lop++){
		cout << "FOR " << O_lop+1 << " Month" <<endl;
		cout << "number of rainy days : " << R[O_lop] << endl;
		cout << "number of cloudy days : " << C[O_lop] << endl;
		cout << "number of sunny days : " << S[O_lop] << endl;
		cout << endl;
		if(R[max] < R[O_lop]){
			max = O_lop;
		}
		sum += R[O_lop];
		if(O_lop != 0){
			C[0] += C[O_lop];
			S[0] += S[O_lop];	
		}
		
		
	}
	cout << "Whole three month report" << endl;
	cout << "Largest number of rainy days " << R[max] << " of month : "; 
	for(int O_lop=0; O_lop<3; O_lop++){
		if(R[max] == R[O_lop]){
			cout << month_name[O_lop] << " ";	
		}	
	}
	cout << endl;
	
	cout << "number of rainy days : " << sum << endl;
	cout << "number of cloudy days : " << C[0] << endl;
	cout << "number of sunny days : " << S[0] << endl;	
	return 0;
}


