/* create a user defined vector
 * vector in c++ are continousluy defined memory just like arrys
 * author : madhu kumar d s
 * 18 july 2014 09hr 36min <24> */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	std::cout << "THIS PROGRAME CREATES A USER DEFINED VECTOR" << endl;
	std::cout << "please ente size of memory allocaton" << endl;
	int n;
	std::cin >> n;

	int *m = new int[n];
	
	if (m != 0){
		std::cout << "memory creation succeeded!" << endl;
	}
	else{
		std::cout << "memory creation failed!" << endl;
	}

	std::cin.ignore();
	std::cout << "please enter a key to exit ......." << endl;
	std::cin.ignore();
	return 0;
}