/*
Author : Madhu Kumar D S
cesat type encoding with one bit shift factor
*/

#include<iostream>
#include<windows.h>
#include<math.h>
#include<string>

using namespace std;

class str{
private:
	typedef enum { a = 1, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z = 26 }
	cast;

private:
	char deScripted[101];
	char enScripted[101];
	short int delta[25];
	int shift;
	void enscript();

public:
	str();
};

str::str(){
	cout << "enter a string :: <spaces allowed> <lowercased alphabets only>";
	cin >> deScripted;
	cout << "enter shift factor ::";
	cin >> shift;

	cout << "\n\n" << "==============================" << endl;
	enscript();
	cout << "\n\n" << "==============================" << endl;
}

void str::enscript(){
	int n = strlen(deScripted);
	int x = shift % 25;
	//cout<<rand();

	/*
	for(int i=0;i<26;i++) delta[i] = rand();
	for(int i=0;i<26;i++) cout<<delta[i]<<"  ";
	*/

	for (int i = 0; i<n; i++){
		//if(deScripted[i] == " ") enScripted[i] = " ";

		{
			enScripted[i] = int(deScripted[i]) + x;
		}
	}

	for (int i = 0; i<n; i++) cout << enScripted[i];
}

void main(){
	system("cls");
	str s;
	cin.ignore();
	cout << "press any key to exit..." << endl;
	cin.ignore();
	system("cls");
}


