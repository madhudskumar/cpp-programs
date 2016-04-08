//constructors in class
//initilization overloading
//author : madhu kumar D S
//23 july 2014 09hr 23min <24>

#include<iostream>
#include<iomanip>

using namespace std;

class user{
public:
	user(int a, int b = 0){
		x = a; y = b;
	}
	void out(){
		cout << x << setw(12) << y;
	}
	user(){
		x = 0; y = 0;
	}
private:
	int x;
	int y;
};

int main(){
	user a;
	user b(1, 2);
	user c(2);

	a.out(); cout << endl;
	b.out(); cout << endl;
	c.out();

	cin.ignore();
	cout << "press return to exit...";
	cin.ignore();
}