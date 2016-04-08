/*
singly linked list 
includeing functions insert delete and display
09 November 2014 02hr 59min<24> 

*/

#include<iostream>
#include<iomanip>

using namespace std;

typedef struct ele{
	int data;
	struct ele *link;
}node;

class sLink
{
public:
	sLink(){ root = NULL; }
	void insertFront();
	void deleteFront();
	void display();
private:
	node *root;
};

void sLink::insertFront()
{
	node *temp = new node;  // Dynamic initilization of objects
	cout << "enter a value to insert";
	int val;
	cin >> val;
	temp->data = val;
	temp->link = root;
	root = temp;
}


void sLink::deleteFront()
{
	if (root == NULL){
		cout << "list is empty" << endl;
		return;
	}

	int val = root->data;
	root = root->link;
	cout << val << "is deleted";
}

void sLink::display(){
	node *ref;

	if (root == NULL){
		cout << "list is empty";
		return;
	}

	for (ref  = root ; ref != NULL ; ref = ref->link )
	{
		cout << setw(4) << ref->data;
	}
}

int main(){
	sLink l;
	int ch;

	do
	{
		cout << "\n1.insert\n2.delete\n3.display\n4.exit";
		cin >> ch;
		switch (ch)	
		{
		case 1:l.insertFront(); break;
		case 2:l.deleteFront(); break;
		case 3:l.display(); break;
		case 4:break;
		default:cout << "invalid choice" << endl;
			break;
		}
	} while (ch!=4);

	cin.ignore();
	cout << "press any key to exit\n";
	cin.ignore();
	return 0;
}