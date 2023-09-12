#include<iostream>
#include<cmath>
using namespace std;
int factorial (int);
int main() {
	double sin=0, x;
	int n;
	bool p_n = 1;
	cout << "Enter value of x in radian ";
	cin >> x;
	do{
		cout << "Enter value of n ";
		cin >> n;	
	}while(n<0);
	
	for(int L=1; L<= n; L +=2){
		if(p_n){
			sin += (pow(x,L))/factorial(L);
			p_n = 0;
		}
		else{
			sin -= (pow(x,L))/factorial(L);
			p_n=1;
		}
	}
	cout << "\nsin of value " << x << " is : " << sin;
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
