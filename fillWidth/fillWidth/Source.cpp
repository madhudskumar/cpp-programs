//program to fill blank spaces in a given width

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int a[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "enter integer ::" << i; cin>>a[i];
	}

	

	for (int i = 0; i < 3; i++)
	{
		cout.width(10);
		cout.fill('*');
		cout << a[i]<<endl;
	}

	cin.ignore();
	cin.ignore();
	return true;
}

