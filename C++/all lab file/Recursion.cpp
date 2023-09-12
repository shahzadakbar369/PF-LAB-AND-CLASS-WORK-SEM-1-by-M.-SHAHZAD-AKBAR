#include<iostream>
using namespace std;

int sum_n(int);
int sum_E_O(int);
int number_zeros(int);
int expo(int,int);

int main(){
	
	int n,p;
	cout << "Enter digit to get sum upto that digiat : ";
	cin >> n;
	cin >> p;
	//cout << endl << "sum is " << sum_n(n);
	//cout << endl << "sum for "<<((n%2==0)?"even":"odd") << " number is "<< sum_E_O(n);
	//cout << endl << "number of zeros " << number_zeros(n);
	cout << endl << "power of value is  " << expo(n,p);
	return 0;	
}

int sum_n(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n + sum_n(n-1);
	}
}

int sum_E_O(int n){
	if(n<=1){
		if(n%2==0){
			return 0;	
		}
		else{
			 return 1;
		}
	}
	else{
		cout << n << endl;
		return (n+sum_E_O(n-2));
	}
	
}

int number_zeros(int n){
	if(n == 0){
		return 0;
	}
	
	return (((n%10)==0)?number_zeros(n/10)+1:number_zeros(n/10));
}

int expo(int n,int p){
	if(p==0){
		return 1;
	}
	return n*expo(n,p-1);
}

int bio_coff(int n, int k){
	
	
	return bio_coff(n-1,k-1)+bio_coff(n-1,k);
}

