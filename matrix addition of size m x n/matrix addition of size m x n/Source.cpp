/*read's add's display's matrix of user defined order m x n 
 *  coloumns n
 *      ^
 * | a a a a |
 * | a a a a |  > rows m
 * | a a a a |
 *
 * author : madhu kumar d s 
 * 18 july 2014 20 hr 17min <24> */

#include<iostream>

using namespace std;

int a[10][10], b[10][10], c[10][10];

void input(int a[10][10], int x, int y);
void addm(int , int );
void display(int a[10][10], int x1, int y1);

int main(){
	
	system("cls");
	
	std::cout << "THIS PROGRAME ACCEPS USER DEFINED MATRIX AND ADDS THE VALUES" << endl;
	std::cout << "please provide the order of matrix a" << endl;
	int m, n, p, q;
	std::cin >> m >> n; input(a, m, n);
	std::cout << "please provide the order of matrix b" << endl;
	std::cin >> p >> q; input(b, p, q);
	if (m != p || n != q){
		std::cout << "invalid parameters";
		std::cin.ignore();
		main();
	}
	addm(m, n);
	std::cout << "obtained results" << endl;
	std::cout << "\n" << "a= "; display(a, m, n);
	std::cout << endl << "b= "; display(b, p, q); 
	std::cout << endl << "a+b= "; display(c, m, q);
	std::cout << endl;

	std::cin.ignore();
	std::cout << "press any key to exit...." << endl;
	std::cin.ignore();
	return 0;
}

void input(int a[10][10], int x, int y){
    
	std::cout << "please enter the matrix  elements" << endl;
	
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			std::cin.ignore() >> a[i][j];
			std::cout << " ";
		}
		std::cout << endl;
	}
}

void addm(int m ,int n){
	for (int i = 0; i < m; i++){
		for (int j = 0; i < n; j++){
			::c[i][j] = a[i][j] + b[i][j];
		}
	}

}

void display(int a[10][10], int x1, int y1){
	for (int i = 0; i < x1; i++){
		for (int j = 0; j < y1; j++){
			std::cout << a[i][j] << "  ";
		}
		std::cout << endl;
	}
}
