#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int floor,room=0,inp_room, occupied=0, inp_occupied;
	do{
		floor = 0;
		cout << "Enter floors : ";
		cin >> floor;
	}while(floor < 1);

	for (int loop = 1; loop <= floor; loop++) {
		do{
			inp_room =0;
			cout << "Enter number of room in floor " << loop << " : ";
			cin >> inp_room;
		}while(inp_room < 10);
		
		room += inp_room;
		do{
			inp_occupied = -1; 
			cout << "Enter occupied room : ";
			cin >> inp_occupied;
		}while(inp_occupied > inp_room);
		
		occupied += inp_occupied;

	}
	cout << "--------Result-------" << endl;
	cout << "Rooms the hotel has : " << room << endl;
	cout << "The percentage of rooms that are occupied : " << ((float)occupied/room)*100 << "%";


	cout << endl;
	system("pause");
	return 0;
}
