/*
delta encription

Author Madhu kumar D S

each letter is encripted with individual shift factor

*/

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<Windows.h>

//using namespace std;

inline int moder(int x){ return int(x % 26); }

class str
{
public:
	str();

private:
	char descripted[101];
	char enscripted[101];
	char delta[26];
	void enscript();
	void put(char, int);
	void push(char x, int i){ enscripted[i] = x; }
};


str::str()
{
	cout << "Enter a string <spaces allowed><lowercases>";
	gets(descripted);

	for (int i = 0; i < 26; i++)
	{
		delta[i] = rand();
	}

	enscript();

	int len = strlen(descripted);
	cout << "==      ==          ==              ==        ==";
	cout << endl << endl;
	for (int i = 0; i < len; i++)
	{
		cout << enscripted[i];
	}
	cout << endl << endl;
	cout << "==      ==          ==              ==        ==";
}

void str::enscript()
{
	int len = strlen(descripted);
	for (int i = 0; i < len; i++)
	{
		if (int(descripted) == 32) enscripted[i] = char(32);

		else put(descripted[i], i);
	}
}

void str::put(char d, int i)
{
	switch (int(d)){
	case 97: push(char(97 + moder(delta[0])), i); break;
	case 98: push(char(98 + moder(delta[1])), i); break;
	case 99: push(char(99 + moder(delta[2])), i); break;
	case 100: push(char(100 + moder(delta[3])), i); break;
	case 101: push(char(101 + moder(delta[4])), i); break;
	case 102: push(char(102 + moder(delta[5])), i); break;
	case 103: push(char(103 + moder(delta[6])), i); break;
	case 104: push(char(104 + moder(delta[7])), i); break;
	case 105: push(char(105 + moder(delta[8])), i); break;
	case 106: push(char(106 + moder(delta[9])), i); break;
	case 107: push(char(107 + moder(delta[10])), i); break;
	case 108: push(char(108 + moder(delta[11])), i); break;
	case 109: push(char(109 + moder(delta[12])), i); break;
	case 110: push(char(110 + moder(delta[13])), i); break;
	case 111: push(char(111 + moder(delta[14])), i); break;
	case 112: push(char(112 + moder(delta[15])), i); break;
	case 113: push(char(113 + moder(delta[16])), i); break;
	case 114: push(char(114 + moder(delta[17])), i); break;
	case 115: push(char(115 + moder(delta[18])), i); break;
	case 116:
		push(char(116 + moder(delta[19])), i);
		break;
	case 117: push(char(117 + moder(delta[20])), i); break;
	case 118: push(char(118 + moder(delta[21])), i); break;
	case 119: push(char(119 + moder(delta[22])), i); break;
	case 120: push(char(120 + moder(delta[23])), i); break;
	case 121: push(char(121 + moder(delta[24])), i); break;
	case 122: push(char(122 + moder(delta[25])), i); break;
	default: push(char(int(d) + moder(1)), i); break;
	}
}

int main(){
	system("cls");
	str a;
	cout << "end";
	cin.ignore();
	cin.ignore();
	cin.ignore();
	system("cls");
	cout << "press any key to exit .. .. .. ";
	cin.ignore();
	return (0x000);
}
