/* loop digits ++
 * required output : 
 * // 1
 * // 22
 * // 333
 * // 4444 
 * // .......
 * loop control : user defined
 * 
 * author : madhu kumar d s 
 * 18 july 2014 09hr 04min */

#include<iostream>

using namespace std;

int main(){
	int n;

	std::cout << "THIS PROGRAME LOOPS DIGITS " << endl << "loop USER DEFINES" <<endl;
	std::cout << "please enter the loops number" << endl;
	std::cin >> n;
	std::cout << "\n\n";

	for (int i = 1; i <= n; i++){
		for (int j = 0; j != i; j++){
			std::cout << i;
		}
		std::cout << endl;
	}
	std::cout << endl << "looped!" << endl;
	
	std::cin.ignore();
	std::cout << "please enter a key to exit....";
	std::cin.ignore();
	return 0;
}