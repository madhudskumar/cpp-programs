/* Macro // inline function to obtain largest of three numbers
 * author madhu kumar d s 
 * 18 julu 2014 23hr 32min <24>*/

#include<iostream>

inline int l3(int a, int b, int c){ 
	int z = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	return z;
}

using namespace std;

int main(){
		
	std::cout << "THIS PROGRAM PRINTS THE LARGEST OF THREE NUMBERS" << endl;
	std::cout << "please provide three numbers" << endl;
	
	int a, b, c;
	std::cin >> a >> b >> c;

	std::cout <<"\n\nlargest number\t" << l3(a, b, c);

	std::cin.ignore();
	std::cout << "\n\nplease press a key to exit" << endl;
	std::cin.ignore();
}