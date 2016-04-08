
#include<iostream>
#include<iomanip>

using namespace std;

class integer{
private:
	int x, y;

public:
	integer(int a, int b){ x = a; y = b; }
	integer(){}
	friend integer operator + (integer, integer);
	friend int operator + (integer, int);
	void print(){
		cout << x << setw(10) << y << endl;
	}
};

integer operator +(integer a, integer b){
	integer temp;
	temp.x = a.x + b.x;
	temp.y = a.y + b.y;

	return temp;
}

int operator + (integer a, int b){
	int c = a.x + b;

	return c;
}


void main(){
	integer obj1(2, 3);
	integer obj2(3, 2);

	integer obj3 = obj1 + obj2;
	obj3.print();

	cout << "obj 3 added " << (obj3 + 10) << endl;

	obj3 + obj1;

	obj3.print();

	cin.ignore();
}



