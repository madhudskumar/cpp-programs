//KnapSack using dynamic algorithm ! <i really dont know wtf is that!>

#include<iostream>
#include<iomanip>

using namespace std;

struct elements{
	int weight;
	int price;
	int flag = 0;
	int preVal;
};

elements item[20];// items
int a[16][4] = { { 0, 0, 0, 0 },
{ 0, 0, 0, 1 },
{ 0, 0, 1, 0 },
{ 0, 0, 1, 1 },
{ 0, 1, 0, 0 },
{ 0, 1, 0, 1 },
{ 0, 1, 1, 0 },
{ 0, 1, 1, 1 },
{ 1, 0, 0, 0 },
{ 1, 0, 0, 1 },
{ 1, 0, 1, 0 },
{ 1, 0, 1, 1 },
{ 1, 1, 0, 0 },
{ 1, 1, 0, 1 },
{ 1, 1, 1, 0 },
{ 1, 1, 1, 1 } };

	// assuming no one put value of items more than 15;
	//i know its really foolissh but too sleepy to write function


int check(int n){
	if (n < 16) return 4;
	else return INFINITY;
}

int mes(int x,int f = 1){
	if (item[x].flag == 1){
		cout << "error"; throw(item[x].weight);
		exit(0x0000);
	}

	int b = check(x);
	int res = 0;
	
	if (f == 1){
		for (int j = 0; j < b; j++)
		{
			res += item[a[x][j]].weight;  // again too lazy to code
		}
	}

	else{
		for (int j = 0; j < b; j++)
		{
			res += item[a[x][j]].price;  // again too lazy to code
		}
	}
	
	return res;
}

bool main(){
	int n; // no of items
	int tWeight;
	int totalp[20], totalw[20];

	cout << "Enter total weight : "; cin >> tWeight;
	
	cout << "Enter the no of items : "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "enter " << i+1 << " weight";
		cin >> item[i].weight;
		cout << "enter " << i+1 << " price";
		cin >> item[i].price;
		if (item[i].weight > tWeight )
		{
			item[i].flag = 1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		totalw[i] = mes(i);
		totalp[i] = mes(i, 0);

		if (totalw[i] > tWeight) totalp[i] = 0;
		cout << endl << endl;
	}

	for (int i = 0; i<(n - 1); i++)
	{
		for (int j = 0; j<n - i - 1; j++)
		{
			if (totalp[j]>totalp[j + 1])
			{
				int temp = totalp[j];
				totalp[j] = totalp[j + 1];
				totalp[j + 1] = temp;
			}
		}
	}

	cout << setw(6) << "sel" << "  " << setw(6) << "price" << setw(6) << "weight" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << item[i].preVal << "  " << setw(6) << totalp[i] << setw(6) << totalw[i] << endl;
	}

	cin.ignore();
	cin.ignore();
	cout << "Press any key to exit ... ";
	return true;
}