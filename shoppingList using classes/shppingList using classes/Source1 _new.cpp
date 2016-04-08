//items shopping list
// an illustration of classes and objects
// author : madhu kumar d s
// 21 july 2014 11hr 48min

#include<iostream>

using namespace std;

#define len 10

class item
{
public:
	void getItemDat(void);
	void displayItemDat(void);
	void displayAllItemDat(void);
	void removeItemData(void);
	void countInitialize(void){ count = 0; }
private:
	int itemCode[len];
	int itemQuantity[len];
	int count;
	double itemPrice[len];
	double itemCost[len];

};



void item::getItemDat(void){
	cout << endl << "itemCode     - "; cin >> itemCode[count];
	cout << endl << "itemQuantity - "; cin >> itemQuantity[count];
	cout << endl << "itemPrice    - "; cin >> itemPrice[count];
	itemCost[count] = (itemQuantity[count] * itemPrice[count]);
	cout << endl << "itemCost     - " << itemCost[count] << endl << endl;
	count++;

}
void item::displayItemDat(void){
	cout << "plaese give ur item code";
	int itemCodeIn;
	cin >> itemCodeIn;

	for (int i = 0; i <= count; i++){
		if (itemCode[i] == itemCodeIn){
			
			cout << endl << "itemCode     - " << itemCode[i];
			cout << endl << "itemQuantity - " << itemQuantity[i];
			cout << endl << "itemPrice    - " << itemPrice[i];
			cout << endl << "itemCost     - " << itemCost[i] << endl << endl;
		}
		else{
			cout << endl << itemCodeIn << " is not valid " << endl;
			cin.ignore();
		}
	}


}

void item::displayAllItemDat(void){
	for (int i = 0; i <= count; i++){
		
		cout << endl << "itemCode     - " << itemCode[i];
		cout << endl << "itemQuantity - " << itemQuantity[i];
		cout << endl << "itemPrice    - " << itemPrice[i];
		cout << endl << "itemCost     - " << itemCost[i] << endl << endl;

	}

	double totalSum{ 0 };
	for (int i = 0; i <= count; i++){
		totalSum = totalSum + itemCost[i];
	}
	cout << endl << "**************************";
	cout << endl << "     Total cost = " << totalSum << endl;
	cin.ignore();
	cin.ignore();

}

void item::removeItemData(void){
	cout << "enter ur itemCode to be removed ";
	int removeItem;
	cin >> removeItem;
	for (int i = 0; i <= count; i++){
		if (itemCode[i] == removeItem){
			itemCode[i] = itemPrice[i] = itemQuantity[i] = itemCost[i] =  0.0;
			cout << endl << "#" << removeItem << "Item removed!";
		}
		else{
			cout << endl << "#" << removeItem << "item removal unsuccessful!" << endl;
		}
	}
	cin.ignore();

}

int main(){
	cout << "THIS PROGRAMME ILLUSTRATES ABOUT CLASSES AND OBJECTS" << endl;
	item u;
	u.countInitialize();
	while (true){
		int choice;
		cout << "please enter ur choice" << endl
			<< "    1-feed information" << endl
			<< "    2-display specific information" << endl
			<< "    3-display all information" << endl
			<< "    4-remove information" << endl
			<< "    5-Quit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:u.getItemDat(); break;
		case 2:u.displayItemDat(); break;
		case 3:u.displayAllItemDat(); break;
		case 4:u.removeItemData(); break;
		case 5:break;
		default:cout << "invalid input" << endl; break;
		}
		
	}

	cin.ignore();
	cout << "press a key to exit..";
	cin.ignore();

	return 0;
}