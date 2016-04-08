/*
To convert a decimal integer to an 
octal form using private function and operator overloading
*/

#include<iostream>
#include<iomanip>

using namespace std;

class octal
{
public:
	octal(){ num = 0; }
	octal(int k){ num = convertBase(k, 10, 8); }
	int operator + (int k) { return ((convertBase(num, 8, 10) + k)); }
	friend ostream &operator <<(ostream&out, octal &obj){
		out << obj.num;
		return out;
	}
	~octal(){}

private:
	int num;

	int convertBase(int num, int from, int to){
		
		int flag = 0, result = 0, i = 0;
		
		if (num < 0)
		{
			num = -num;
			flag = 1;
		}
		
		while (num>0)
		{
			result = result + ((num%to)*int(pow(from, i++)));
			num = num / to;
		}

		if (flag == 1)
		{
			result = -result;
		}

		return result;
	}
};

int main(){
	system("cls");
	cout << "Enter a number to be converted [decimal -> integer] :?\b";
	int z;
	cin >> z;
	octal h(z);

	cout << endl << "equivalent decimal o/p is : " << h;

	cout << endl
		<< "enter an integer to be added to the above decimal::";
	cin >> z;
	int y = h + z;
	cout << "sum = " << y << "in decimal";
	octal j(y);
	cout << endl << "sum = " << j << "in octal";

	cin.ignore();
	cout << endl << "press any key to exit";
	cin.ignore();
}