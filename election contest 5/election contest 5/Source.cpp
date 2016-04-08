/*eloctrol count and read ballots displays at the same time
 * author : madhu kumar d s
 * 18 july 2014 11hr 29min */

#include<iostream>
#include<conio.h>

using namespace std;
 
int main(){
	int ch;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, sb = 0;
	system("cls");

	std::cout << "THIS PROGRAMME READ'S AND DISPLAYS DATA CONTINOUSLY" << endl;
	std::cout << "please enter eloctrol number" << endl;
	std::cout << "candidate \'a\'- 1 " << endl
		<< "candidate \'b\'- 2 " << endl
		<< "candidate \'c\'- 3 " << endl
		<< "candidate \'d\'- 4 " << endl
		<< "candidate \'e\'- 5 " << endl
		<< "spoilt ballot  - 6 " << endl
		<< "over counting   -0 " << endl;

	do{
		std::cin >> ch;
		switch (ch){
		case 1: c1++; break;
		case 2: c2++; break;
		case 3: c3++; break;
		case 4: c4++; break;
		case 5: c5++; break;
		default: sb++; break;
		}
		std::cout << "candidate \'a\'-  " << c1 << endl
			<< "candidate \'b\'-  " << c2 << endl
			<< "candidate \'c\'-  " << c3 << endl
			<< "candidate \'d\'-  " << c4 << endl
			<< "candidate \'e\'-  " << c5 << endl
			<< "spoilt ballot -   " << sb << endl;
	} while (ch != 0);
	if (ch == 0){
		std::cout << "counting OVER !" << endl;
		std::cout << "candidate \'a\'-  " << c1 << endl
			<< "candidate \'b\'-  " << c2 << endl
			<< "candidate \'c\'-  " << c3 << endl
			<< "candidate \'d\'-  " << c4 << endl
			<< "candidate \'e\'-  " << c5 << endl
			<< "spoilt ballot -   " << sb-1 << endl;
	}
	
	std::cin.ignore();
	std::cout << "please press a key to exit .....";
	std::cin.ignore();
	return 0;
}
