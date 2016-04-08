//about file operations fstreams and .open functioms

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

bool main(){
	ofstream outf("person.txt");

	cout << "\nEnter ur Name : ";
	char name[20];
	cin.getline(name, 80);

	cout << "\nEnter ur age : ";
	int age;
	cin >> age;

	outf << "Name : " << name << endl <<"Age :"<< age << endl;

	cin.ignore();
	system("cls");

	ifstream inf("person.txt");

	inf.getline(name, 80);
	cout << name << endl;
	inf.getline(name, EOF);
	cout << name << endl;

	cin.ignore();
	cout << "press any key to exit ..";
	cin.ignore();
	system("flush");
	system("cls");
	return true;
}														