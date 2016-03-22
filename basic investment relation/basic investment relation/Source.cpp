/*evaluates investment relation
 * // v = p*((1+r)^n)
 * // v value of money
 * // p principle amount
 * // n Number of years
 * // r rate 
 * the value of money at the end of first year becomes 
 * the principle amt. for next year */

#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
	
int main(){
	
	double v;

	std::cout << "THIS PROGRAME CALCULATRES THE PRINCIPLE AMT FOR THE NEXT YEAR " << endl;

	int p = 1000, n = 1;
	double r = 0.10;
	std::cout << "principle amount " << "Number of years " << "rate " << "value of money" << endl;
	std::cout << setw(15) << p << setw(15) << n << setw(14) << (r = r + 0.01);
	v = p*pow(1.0 + r, n);
	std::cout << setw(14) << v << endl;
	for (int n = 2; n <= 10; n++){		
		std::cout << "principle amount " << "Number of years " << "rate " << "value of money" << endl;
		std::cout << setw(15) << (p += 1000) << setw(15) << n << setw(14) << (r = r + 0.01);
		v = p*pow(1.0 + r, n);
		std::cout << setw(14) << v << endl;
	}

	std::cin.ignore();
	std::cout << "please enter a key to exit";
	std::cin.ignore();
	return 0;
} 