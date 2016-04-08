/*
programe to create class STACK 
operator overloading of +,-,<<
*/

#include<iostream>
#include<iomanip>

using namespace std;

#define MAX 101

class stack
{
public:
	stack(){ top = -1; }
	void operator+(int ele);
	int operator-();
	friend ostream &operator << (ostream & out, stack & obj);
private:
	int a[MAX];
	int top;
};

void stack :: operator+(int ele){
	if (top >= MAX - 1){
		cout << "\n\nstack is full\n\n";
		return;
	}

	else a[++top] = ele;
}

int stack :: operator - (){
	if (top <= 0)
	{
		cout << "\n\nstack is empty\n\n";
		return NULL;
	}

	else return a[top--];
}

ostream &operator << (ostream&out, stack&obj){
	if (obj.top <= 0){
		cout << "\n\nstack is empty\n\n";
	}
	else{
		for (int i = 0; i <= obj.top; i++) out << setw(4) << obj.a[i];
	}

	return out;
}

int main(){
	int ch;
	stack obj;
	do
	{	
		cout << "\n1.insert\n2.delete\n3.display\n4.exit\n";
		cout << "enter ur choice :: "; cin >> ch;
		switch (ch)
		{
		case 1:
			int val;
			cout << "\nenter an element to insert :: "; cin >> val;
			obj + val; break;

		case 2:
			int ele;
			ele = -obj;
			cout << ele << "is deleted \n\n";
			break;

		case 3:
			cout << "\n\nelements are .... " << obj;
			break;

		case 4:
			break;

		default:
			cout << "\n\ninvalid choice\n\n";
			break;
		}

	} while (ch!=4);
	
	cin.ignore();
	cout << "enter any key to exit ... " << endl;
	cin.ignore();
	return 1;
}