// This programme illustrates the dynamic initilization of constructors
// long term fixed deposit
// author : madhu kumar D S
// 23 july 2014 10hrs 18min <24>

#include<iostream>

using namespace std;

class deposit
{
public:
	void displayUserData();
	deposit(int p, int t,double r = .12){
		principle = p;
		timePeriod = t;
		rateOfIntrest = r;
	}
	deposit(int p, int t, int r ){
		principle = p;
		timePeriod = t;
		rateOfIntrest = (.12);
	}
	deposit(){  }
private:
	int principle;
	int timePeriod;
	double rateOfIntrest;
	double valuedMoney;
};

void deposit::displayUserData(){
	valuedMoney = principle*(pow((1+rateOfIntrest),timePeriod));
	cout << "ur valued money == " << valuedMoney;
}

void main(){
	cout << "programe illustrates Dynamic initilization of objects" << endl;
	
	deposit f1, f2, f3;
	
	int p, t; double r;
	std::cout << "please provide " << endl
		<< endl << "Principle amount - "; cin >> p;
	std::cout << "please provide " << endl
		<< endl << "Time Period - "; cin >> t;
	std::cout << "please provide " << endl
		<< endl << "rate of intrest - "; cin >> r;
	f1 = deposit(p, t, r);
	
	std::cout << "please provide " << endl
		<< endl << "Principle amount - "; cin >> p;
	std::cout << "please provide " << endl
		<< endl << "Time Period - "; cin >> t;
	std::cout << "Rate of intrest - "; cin >> r;
	f2 = deposit(p, t, r);

	std::cout << "please provide " << endl
		<< endl << "Principle amount - "; cin >> p;
	std::cout << "please provide " << endl
		<< endl << "Time Period - "; cin >> t;
	f3 = deposit(p, t);

	f1.displayUserData();
	f2.displayUserData();
	f3.displayUserData();

	cin.ignore();
	cout << "press return to exit... ";
	cin.ignore();
}