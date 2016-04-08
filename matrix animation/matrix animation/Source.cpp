//matrix animation

#include<iostream>
#include<iomanip>
#include<chrono>
#include<thread>
#include<windows.h>


inline int modc(int x) {\
return(x % 10); \
}

inline int modr(int x) {\
	return(x % 10); \
}

using namespace std;

bool main(){
	HANDLE hConsole;
	int a[10][10] = {0};
	int cur = 0, base = 0;
	int c = 0;


goto loop1;
	
print:{
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{			
				if (c == 224) c = 0;
				SetConsoleTextAttribute(hConsole, c++);
				cout << "|";
				cout.width(4);
				cout.fill(' ');
				cout << a[i][j];
				cout << "|";
				cout << " ";
		}
		cout << endl;
	}
	std::this_thread::sleep_for(std::chrono::seconds(1));
	system("cls");
}

loop1:{
	base = rand();
		
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{				
				cur = rand();
				if (base == cur) break;

				if (modr(cur) < 10 && modc(cur) < 10)
				{
					a[modr(cur)][modc(cur)]++;

					cout << endl << setw(8) << setfill('.') << cur << endl;
					cout << "row =  " << setw(4) << modr(cur) << " || " << "col = " << setw(4) << modc(cur) << endl;
					goto print;
				}
			}
		}
}

	cin.ignore();
	cin.ignore();
	cout << "press any key to exit .. ";
	cin.ignore();
	system("cls");
	return true;
}
