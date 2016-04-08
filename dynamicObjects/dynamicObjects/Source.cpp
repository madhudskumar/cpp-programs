/*
creating ahuman class via dynamic object
*/

#include<iostream>
#include<iomanip>

using namespace std;

enum sex
{
	male = 0, female = 1
};

class human
{
public:
	void getData(){
		cout << "name= "; cin >> name;
		cout << "age = "; cin >> age;
		cout << "sex = "; cin >> sex;
	}
	void showData(){
		cout << "name =  " << name << endl;
		cout << "age = " << age << endl;
		cout << "sex = " << sex << endl;
	}

private:
	char name[25];
	int age;
	int sex;
};

int main(){
		system("cls");

		int n;

	cout << "enter the number of humans "; cin >> n;

	human **fname = new human*[n];

	for (int i = 0; i < n; i++){
		fname[i]->getData();
	}

	for (int j = 0; j < n; j++){
		fname[j]->showData();
		delete fname[j];
	}

	cin.ignore();
	cout << "enter a key to exit...";
	cin.ignore();
	return 0;
}               