//Design Develop;
//an EMPLOYEE class
#include<iostream>
#include<iomanip>

using namespace std;

class EMPLOYEE
{
public:
	EMPLOYEE(){}
	~EMPLOYEE(){}
	void get();
	void calc();
	void post();

private:
	int Employee_Number;
	char Employee_Name[25];
	int Basic_Salary;
	int All_Allowances;
	int IT;
	int Net_Salary;
};

void EMPLOYEE::get(){
	cout << "enter ur Employee number" << endl;
	cin >> Employee_Number;

	cout << "enter ur Name" << endl;
	cin >> Employee_Name;

	cout << "enter ur basic salary" << endl;
	cin >> Basic_Salary;
}

void EMPLOYEE::calc(){
	All_Allowances = 1.23 * Basic_Salary;
	IT = .3*(Basic_Salary + All_Allowances);
	int x = Basic_Salary + All_Allowances;
	Net_Salary = x - IT;
}

void EMPLOYEE::post(){
	calc();
	cout << "employee" << endl;
	cout << "name:" << Employee_Name << endl;
	cout << "no. :" << Employee_Number << endl;
	cout << "Net salary:" << Net_Salary << endl;
}

int main(){
	system("cls");

	EMPLOYEE user;

	user.get();
	user.post();

	cout << "press any key to exit....";
	cin.ignore();
	cin.ignore();
}