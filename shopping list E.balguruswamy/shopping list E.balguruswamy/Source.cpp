//e balguruswamy shopping list
// copied 
// 21 july 2014 02hr 59min 

#include<iostream>

using namespace std;

class items{
private:
	int itemCode[10];
	double itemPrice[10];
	int count;

public:
	void cnt(void){ count = 0; }
	void getDat(void);
	void displayDat(void);
	void remove(void);
	void displayItems(void);
};

void items::getDat(void){
	cout << "Enter Item Code";
	cin >> itemCode[count];

	cout << "Enter item Cost";
	cin >> itemPrice[count];
	count++;
}

void items::displayDat(void){
	double sumTotal = 0;
	for (int i = 0; i < count < i++;){
		sumTotal = sumTotal + itemPrice[i];
	}

	cout << "\n Total Value + " << sumTotal << endl;
}

void items::remove(void){
	int a;
	cout << "enter item code ";
	cin >> a;

	for (int i = 0; i < count; i++){
		if (itemCode[i] == a)
			itemCode[i] = 0;
	}
}

void items::displayItems(void){
	cout << "\ncode price\n" << endl;

	for (int i = 0; i < count; i++){
		cout << endl << itemCode[i] << " " << itemPrice[i];
	}

	cout << endl;

}

int main(){
	items u;
	int x;

	u.cnt();

	do
	{
		cout << endl << "you can do the following" << endl
			<< endl << "1 add item"
			<< endl << "2 display total value"
			<< endl << "3 remove an item"
			<< endl << "4 display all items"
			<< endl << "5 quit" << endl;

		cin >> x;

		switch (x){
		case 1: u.getDat(); break;
		case 2: u.displayDat(); break;
		case 3: u.remove(); break;
		case 4: u.displayItems(); break;
		default:cout << "Error in input try again" << endl;
		}

	} while (x!=5);

	cin.ignore();
	std::cout << "please press a key to exit .. ";
	cin.ignore();
	return 0;
}