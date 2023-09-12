#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char game[3][3];
	char compare;
	bool win = false;
	int player =1, loc_r=-1,loc_c=-1, count=0, match;
	do{
		system("CLS");
		cout << "Game Board" <<endl;
		for(int O_lop=0; O_lop<3; O_lop++){
			for(int i_lop=0; i_lop<3; i_lop++){
				
				if(O_lop == loc_r && i_lop==loc_c){
					if(player ==1){
						game[O_lop][i_lop] = 'X';
						player = 2;
					}
					else{
						game[O_lop][i_lop] = 'O';
						player = 1;
					}
				}
				else if(count ==0){
					game[O_lop][i_lop] = '*';
				}
			
			cout << game[O_lop][i_lop] << "\t";
		}
			cout << endl;
		}
		if(count >= 5){
			if(player == 2){
				compare = 'X';
			}
			else{
				compare = 'O';
			}
			
			if((game[0][0] == compare && game[1][1] == compare && game[2][2] == compare) || (game[0][2] == compare && game[1][1] == compare && game[2][0] == compare)){
				win = true;
			}
			else{
				for(int O_lop=0; O_lop<6; O_lop++){
				match = 0;
					for(int i_lop=0; i_lop<3; i_lop++){
						if(O_lop < 3){
							if(game[O_lop][i_lop] == compare){
							match++;
							}
							else{
								break;
							}
						}
						else{
							if(game[i_lop][O_lop-3] == compare){
							match++;
							}
							else{
								break;
							}
						}
					
					}
					if(match == 3){
						win = true;
						break;
					}
				}	
			}
		}
		if(!win){
			count++;
			cout << "Now player " << player << " is playing"<< endl;
		
			do{
				do{
					cout << "Enter row (1-3) : ";
					cin >> loc_r;
					loc_r--;
				}while(loc_r >= 3);
				do{
					cout << "Enter colum (1-3) : ";
					cin >> loc_c;	
					loc_c--;
				}while(loc_c >=3);
			}while(!(game[loc_r][loc_c] == '*'));			
		}

	
	
		if(count == 9 && !win){
			cout << "Math drawn" << endl;
			break;
		}
		
			
		}while(!win);
		if(win){
				cout << "Player " << (compare == 'X'?"1":"2") << " is win";
		}


	return 0;
}


