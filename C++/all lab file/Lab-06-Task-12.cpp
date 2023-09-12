#include<iostream>
using namespace std;

inline double fallingDistance(int);

int main(){
	for(int t=1; t<=10;t++){
		cout << "For time " << t << "sec distance is : " << fallingDistance(t) << " m " << endl;
	}
	return 0;
}

inline double fallingDistance(int time){
	return (0.5*9.8*time*time);
}

