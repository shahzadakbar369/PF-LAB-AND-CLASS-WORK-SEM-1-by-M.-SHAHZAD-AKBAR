#include<iostream>
using namespace std;

#include<conio.h>
#include<time.h>



int main() {
	//in -- input
	bool  letter_case = 1;
	char in, previous_in_1 =' ', previous_in_2 =' ',extra_in=' ', previous_in=' ';
	long int delay, previous_delay = 0;
	cout << "\tMobile Message Composer\t\n(e -- Exit)\t\t(back -- Backspace)\n(Enter -- Enter)\t(space or 0 -- space)\n\n";
	cout << "[1-.,?!]   [2-ABC ]  [3-DEF ]\n[4-GHI ]   [5-JKL ]  [6-MNO ]\n[7-PQRs]   [8-TUV ]  [9-WXYZ]\n[*-*+  ]   [0-spac]  [#-change the CASE of letter ]\n";
	cout << "----------------------------------------------\n";
	
	
	do {
		in = _getch();
		delay = time(0);
		//agin all previous variable to space to rest 
		if (((delay - previous_delay) > 1) || in !=previous_in) {
			previous_in_1 = ' ';
			previous_in_2 = ' ';
			extra_in = ' ';
		}
		else if(in >=49 && in <=57 || in == 42){
			cout << "\b";
		}
		previous_delay = delay;
		previous_in = in;
		
		
		//number to letter conversion start 
		//for space
		if (in == 32 || in == '0') {
			cout << " ";
		}
		//new line
		else if (in == 13 || in == 10) {
			cout << endl;
		}
		//back space
		else if (in == 8 || in ==127) {
			cout << "\b \b";
		}
		//for .,?!
		else if(in == '1'){
				if (previous_in_1 == in && previous_in_2 == in && extra_in == in) {
				cout << "!";
				previous_in_1 = ' ';
				previous_in_2 = ' ';
				extra_in = ' ';
			}
			else if (previous_in_1 == in && previous_in_2 == in) {
				cout << "?";
				extra_in = in;
			}
			else if (previous_in_1 == in) {
				cout << ",";
				previous_in_2 = in;
			}
			else
			{
				cout << ".";
				previous_in_1 = in;
			}
		}
		//for abc 2
		else if (in == '2') {
			if (previous_in_1==in && previous_in_2 == in) {
				cout << ((letter_case)?"C":"c");
				previous_in_1 = ' ';
				previous_in_2 = ' ';
			}
			else if (previous_in_1 == in) {
				cout << ((letter_case)?"B":"b");
				previous_in_2 = in;
			}
			else{
				cout << ((letter_case)?"A":"a");
				previous_in_1 = in;
			}
		}
		//for def 3
		else if (in == '3') {
			if (previous_in_1 == in && previous_in_2 == in) {
				cout << ((letter_case)?"F":"f");
				previous_in_1 = ' ';
				previous_in_2 = ' ';
			}
			else if (previous_in_1 == in) {
				cout << ((letter_case)?"E":"e");
				previous_in_2 = in;
			}
			else {
				cout << ((letter_case)?"D":"d");
				previous_in_1 = in;
			}
		}
		//for ghi 4
		else if (in == '4') {
			if (previous_in_1 == in && previous_in_2 == in) {
				cout << ((letter_case)?"I":"i");
				previous_in_1 = ' ';
				previous_in_2 = ' ';
			}
			else if (previous_in_1 == in) {
				cout << ((letter_case)?"H":"h");
				previous_in_2 = in;
			}
			else {
				cout << ((letter_case)?"G":"g");
				previous_in_1 = in;
			}
		}
		//for jkl 5
		else if (in == '5') {
			if (previous_in_1 == in && previous_in_2 == in) {
				cout << ((letter_case)?"L":"l");
				previous_in_1 = ' ';
				previous_in_2 = ' ';
			}
			else if (previous_in_1 == in) {
				cout << ((letter_case)?"K":"k");
				previous_in_2 = in;
			}
			else {
				cout << ((letter_case)?"J":"j");
				previous_in_1 = in;
			}
		}
		//for mno 6
		else if (in == '6') {
			if (previous_in_1 == in && previous_in_2 == in) {
				cout << ((letter_case)?"O":"o");
				previous_in_1 = ' ';
				previous_in_2 = ' ';
			}
			else if (previous_in_1 == in) {
				cout << ((letter_case)?"N":"n");
				previous_in_2 = in;
			}
			else {
				cout << ((letter_case)?"M":"m");
				previous_in_1 = in;
			}
		}
		//for pqrs 7
		else if (in == '7') {
			if (previous_in_1 == in && previous_in_2 == in && extra_in == in) {
				cout << ((letter_case)?"S":"s");
				previous_in_1 = ' ';
				previous_in_2 = ' ';
				extra_in = ' ';
			}
			else if (previous_in_1 == in && previous_in_2 == in) {
				cout << ((letter_case)?"R":"r");
				extra_in = in;
			}
			else if(previous_in_1 == in) {
				cout << ((letter_case)?"Q":"q");
				previous_in_2 = in;
			}
			else
			{
				cout << ((letter_case)?"P":"p");
				previous_in_1 = in;
			}
		}
		//for tuv 8
		else if (in == '8') {
			if (previous_in_1 == in && previous_in_2 == in) {
				cout << ((letter_case)?"V":"v");
				previous_in_1 = ' ';
				previous_in_2 = ' ';
			}
			else if (previous_in_1 == in) {
				cout << ((letter_case)?"U":"u");
				previous_in_2 = in;
			}
			else {
				cout << ((letter_case)?"T":"t");
				previous_in_1 = in;
			}
		}
		//for wxyz 9
		else if (in == '9') {
			if (previous_in_1 == in && previous_in_2 == in && extra_in == in) {
				cout << ((letter_case)?"Z":"z");
				previous_in_1 = ' ';
				previous_in_2 = ' ';
				extra_in = ' ';
			}
			else if (previous_in_1 == in && previous_in_2 == in) {
				cout << ((letter_case)?"Y":"y");
				extra_in = in;
			}
			else if (previous_in_1 == in) {
				cout << ((letter_case)?"X":"x");
				previous_in_2 = in;
			}
			else
			{
				cout << ((letter_case)?"W":"w");
				previous_in_1 = in;
			}
		}
		//for * +
		else if (in == '*') {
			if (previous_in_1 == in) {
				cout << "+";
				previous_in_1= ' ';
			}
			else
			{
				cout << "*";
				previous_in_1 = in;
			}
		}
		//for # change case
		else if(in == '#'){
			letter_case = !(letter_case);
		}
	
	
	} while (in != 'e');


	cout << endl;
	system("pause");
	return 0;
}
