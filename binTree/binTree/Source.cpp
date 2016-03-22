/*
Programme to create a binary tree and to perform in,pre,post - order
on the user defined binarytree
*/

#include<iostream>
#include<iomanip>

using namespace std;

typedef struct ele{
	int data;
	struct ele *lch,*rch;
}node;

class binTree
{
public:
	binTree(){ root = NULL; }
	node* getRoot(){ return root; }
	void create(int ele);
	void inOrder(node*);
	void preOrder(node*);
	void postOrder(node*);

private:
	node *root;
};

void binTree::create(int ele)
{
	node *info = new node;
	info->data = ele;
	info->lch = info->rch = NULL;

	if (root == NULL){
		root = info;
		return;
	}

	else{
		node *ref, *temp;
		ref = temp = root;

		while (ref != NULL){
			temp = ref;
			if (ele < ref->data) ref = ref->lch;
			else if (ele>ref->data) ref = ref->rch;
			else if (ele == ref->data)
			{
				cout << "\n\nvalue already present\n\n";
				return;
			}
		}

		if (ele < temp->data) temp->lch = info;
		else if (ele > temp->data) temp->rch = info;
	}
}

void binTree::inOrder(node *ref){
	if (ref){
		inOrder(ref->lch);
		cout << " " << ref->data;
		inOrder(ref->rch);
	}
}

void binTree::preOrder(node *ref){
	if (ref){
		cout << " " << ref->data;
		preOrder(ref->lch);
		preOrder(ref->rch);
	}
}

void binTree::postOrder(node *ref){
	if (ref){
		postOrder(ref->lch);
		postOrder(ref->rch);
		cout << " " << ref->data;
	}
}

int main(){
	int ch, ele;
	node * a;
	binTree t;

	do
	{
		cout << "\n1.enter\n2.inOrder\n3.preOrder\n4.postOrder\n5.exit\n\n"
			<< "enter ur choice ::"; cin >> ch;
		switch (ch)
		{
		case 1:
			int ch1;
			cout << "enter 1 to enter 0 to exit :: "; cin >> ch1;
			if (ch1 == 0) break;
			else{
				cout << "\n enter element to insert ::"; cin >> ele;
				t.create(ele);
			}
			break;
		case 2:
			a = t.getRoot();
			if (a == NULL){
				cout << "\nNo elements exists\n";
				break;
			}
			else{
				t.inOrder(a);
			}
			break;
		case 3:
			a = t.getRoot();
			if (a == NULL){
				cout << "\nNo elements exists\n";
				break;
			}
			else{
				t.preOrder(a);
			}
			break;
		case 4:
			a = t.getRoot();
			if (a == NULL){
				cout << "\nNo elements exists\n";
				break;
			}
			else{
				t.postOrder(a);
			}
			break;
		case 5:break; 
		default:
			break;
		}
	} while (ch!=5);

	cin.ignore();
	system("cls");
	cout << "PRESS ANY KEY TO EXIT ..	";
	cin.ignore();
	return 0;
}
