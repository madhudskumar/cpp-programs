/* one dimension addition and average
 * author : madhu kumar d s
 * 18 july 2014 01hr 24min <24> */

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

	double a, b;
	double sum;
	double avg;

	std::cout.flush();
	std::cout << "\nTHIS PROGRAME TAKE TWO NUMBERS AND PRINTS ITS SUM AND AVERAGE\n\v ";
	std::cout << "\nplease provise two values\n";
	std::cout << "\nx ="; 
	std::cin >> a;
	std::cout << "\ny =";
	std::cin >> b;

	sum = a + b;
	avg = sum / 2;

	std::cout << "\n" << "sum = " << sum << "\t" << "avg = " << avg;
	
	std::cin.ignore();
	std::cout << "\n\n Press any key to exit........"; 
	std::cin.ignore();

	return 0;
}