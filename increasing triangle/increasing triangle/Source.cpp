//programe to create an increasing line of word and decreasing line of words

#include<iostream>
#include<iomanip>

#define MAX_LINE_SIZE 101

using namespace std;

bool main(){
	char line[MAX_LINE_SIZE];

	cout << "enter a string \n";
	cin.getline(line,MAX_LINE_SIZE);

	int ll = strlen(line);

	for (int  i = 0; i <= ll; i++)
	{
		cout.write(line, i);
		cout << endl;
	}
	for (int i = 0; i < ll + 2 ; i++)
	{
		if(i == ll + 1) cout << "......."<<endl;
		else cout << " ";

	}

	for (int i = ll; i >= 0; i--)
	{
		cout.write(line, i);
		cout << endl;
	}

	cin.ignore();
	cin.ignore();
	cout << "Press any key to exit ...";
	cin.ignore();
	return true;
}