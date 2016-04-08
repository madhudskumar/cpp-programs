/* Swap two numbers
 * author : madhu kumar d s
 * july 18 08hr 06min <24>*/

#include<iostream>

using namespace std;

int main(){
	double a, b, temp;
	
	std::cout << "THIS PROGRAM SWAPS THE GIVEN TWO NUMBERS" << endl;
	
	std::cout << "please provide values" << endl;
	std::cout << "x = "; std::cin >> a;
	std::cout << "\ny = "; std::cin >> b;

	temp = a;
	a = b;
	b = temp;

	cout << "\nswaped! " << endl;
	cout << "\n" << "x = " << a << "\t" << "y = " << b << endl;
	
	std::cin.ignore();
	std::cout << "\npress any key to exit.... ";	
	std::cin.ignore();
	return 0;
}