// ifstream objective .open and .close using multiple files and ios 

#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

bool main(){
	ofstream f1;
	char name[30];
	int age;

	cout << "Enter the no of persons :";
	int n;
	cin >> n;

	f1.open("person.txt",std::ios::out);

	for (int i = 0; i < n; i++)
	{
		cout << "Enter name : "; cin >> name ;
		cout << endl << "Enter age :"; cin >> age;
		f1 << name << endl << age << endl;		    					 // ofstream write to file << like write to display 
	}
	
	f1.close();

	cin.ignore();
	system("cls");

	ifstream f2;                                                        // ifstream to read from file >> like cin to console

	f2.open("person.txt", std::ios::in);

	for (int i = 0; i < n; i++)
	{
		f2 >> name;				 
		cout << name << endl;
		f2 >> age;
		cout << age <;
	}

	f2.close();

	cin.ignore();
	cout << "Press any ke to exit ..  ";
	cin.ignore();
	system("cls");
	return true;
}