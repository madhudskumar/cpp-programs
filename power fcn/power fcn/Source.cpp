/*function power to raise member m to power n
 * author : madhu kumar ds
 * 19 julu 2014 01hr 15min */

#include<iostream>
#include<math.h>
#include<limits>

using namespace std;

inline double power(double m, int n=1){
	if (n==0)
		return m;
	for (int i = 0; i < n; i++){
		m = m*m;
	}
	return m;
}

int main(){

	std::cout << "THIS PROGRAM ACCEPTS A NUMBER AND RAISES TO USER DEFINED POWER AND IN DEFAULT CASE SQUARES" << endl;
	std::cout << "please provide a number and the power to be raised" << endl;

	double a;
	int n;

	std::cout << "\nbase number - \t";
	std::cin >> a;
	std::cout << "\npower       - \t";
	std::cin >> n;
	if (n == ' '){
		std::cout << "value =" << "\t" << power(a) << endl;
	}
	else{
		std::cout << "value =" << "\t" << power(a, n) << endl;
	}

	std::cin.ignore();
	std::cout << "please press a key to exit....";
	std::cin.ignore();
}