/*
STRING concatination using operator overloading + 
*/

#include<iostream>
#include<iomanip>

using namespace std;

class STRING
{
public:
	STRING(char *s){
		strcpy_s(str, s);
	}
	
	STRING(){}
	
	STRING operator + (STRING obj){
		strcat_s(str, obj.str);
		return *this;
	}
	
	friend ostream & operator << (ostream &out, STRING &obj);
	
	~STRING(){}

private:
	char str[25];
};

ostream & operator << (ostream &out, STRING &obj){
	out << obj.str;
	return out;

}

void main(){
	STRING a = "vtu";
	STRING b = "belgaum";

	STRING c = a + b;
	
	cout << "string 1 = " << a << endl;
	cout << "string 2 = " << b << endl;
	cout << "string 3 = " << c << endl;

	cin.ignore();
	cout << "press any key to exit...";
	cin.ignore();
}

