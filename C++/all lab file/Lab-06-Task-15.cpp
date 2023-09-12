#include<iostream>
#include<cmath>
using namespace std;

void getJudgeData(float &);
void calcScore(float [], int);
int findHighest(float [], int);
int findLowest(float [], int);

int main(){
	int size =5;
	float score[size];
	
	for(int Lop=0; Lop<size; Lop++){
		cout << Lop+1 << " judge score : ";
		getJudgeData(score[Lop]);
	}
	
	calcScore(score,size);
	return 0;
}

void getJudgeData(float &score){
	bool once = false;
	do{
		if(once){
			cout << "Again : ";
		}
		cin >> score;
		once = true;	
	}while(score < 0 || score > 10);
}
void calcScore(float score[], int size){
	float sum =0,min,max;
	min = findLowest(score,size);
	max = findHighest(score,size);
	
	for(int Lop=0; Lop<size; Lop++){
		if(Lop != min && Lop != max){
			sum += score[Lop];
		}
	}
	cout << "\nAverage of the three scores : " << sum/3;
}
int findLowest(float score[], int size) {
	int min =0;
	for(int Lop=0; Lop<size; Lop++){
		if(score[min] > score[Lop]){
			min = Lop;
		}
	}
	return min;
}

int findHighest(float score[], int size){
	int max =0;
	for(int Lop=0; Lop<size; Lop++){
		if(score[max] < score[Lop]){
			max = Lop;
		}
	}
	return max;
}
