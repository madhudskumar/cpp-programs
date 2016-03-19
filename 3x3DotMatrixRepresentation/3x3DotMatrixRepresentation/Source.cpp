/*
 * Dot matrix representation 
 * ex:
 *	
 *		A 
 *	 	=
 * 		  0        
 *		0   0 
 *		0   0
 *		00000
 * 		0   0
 *
 *		and sorry its 5x5 matrix in a continous line
**/

#include<iostream>
#include<iomanip>
#include"op.h"
#include<windows.h>
#include<thread>
#include<chrono>
#include<math.h>

using namespace std;

class dotMatrix
{
public:
	void get();
	char & ret(int symbol);
	int getLength(){ return strlen(a);}
private:
	char a[50];
};

void dotMatrix::get(){
	cout << "Enter a character :: "; cin.getline(a,50) ;
}

char& dotMatrix::ret(int symbol){
	return (a[symbol]);
}

bool main(){
	dotMatrix d1;
	int len = 0;
	char curSymbol;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int c = 2;

	d1.get();
	len = d1.getLength();

	for (int i = 1; i < 6; i++)
	{
		SetConsoleTextAttribute(hConsole, c++);
		for (int j = 0; j <= len; j++){
			curSymbol = d1.ret(j);
			output(&curSymbol, i);
			std::this_thread::sleep_for(std::chrono::nanoseconds(1));
			//std::this_thread::sleep_until(
				//std::chrono::system_clock::now() + std::chrono::seconds(float(1/2)));
		}
		cout << endl;
	}
		
	cin.ignore();
	cin.ignore();
	system("cls");
	cout << "press any key to exit .. ";
	cin.ignore();
	return true;

}
