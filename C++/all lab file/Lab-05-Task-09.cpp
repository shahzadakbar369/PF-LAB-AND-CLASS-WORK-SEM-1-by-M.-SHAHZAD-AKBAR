#include<iostream>
#include<cmath>
using namespace std;
int factorial (int);
int main() {
	double cos=0, x;
	int n;
	bool p_n = 1;
	cout << "Enter value of x in radian ";
	cin >> x;
	do{
		cout << "Enter value of n ";
		cin >> n;	
	}while(n<0);
	
	for(int L=0; L<= n; L +=2){
		if(p_n){
			cos += (pow(x,L))/factorial(L);
			p_n = 0;
		}
		else{
			cos -= (pow(x,L))/factorial(L);
			p_n=1;
		}
	}
	cout << "\ncos of value " << x << " is : " << cos;
	cout << endl;
	system("pause");
	return 0;
}

int factorial (int L){
	int factorial=1;
	for(int loop=1; loop<=L; loop++){
		factorial =factorial * loop;
	}
	return factorial;
}
