// pointers to members 
// datatype A::* pointer = &A :: m;
// author :: madhu kumar d s
// 23 july 2014 07hrs 25min <24>

#include<iostream>

using namespace std;

class M{
private:
	int x;
	int y;
public:
	void get(int a, int b){
		x = a; y = b;
	}
	friend int sum(M m);
};

int sum(M m){
	int M::* point_x = &M::x;
	int M::* point_y = &M::y;

	M *pointclassMember_m = &m;
	int s = m.*point_x + m.*point_y;                            
	int t = pointclassMember_m->*point_x + pointclassMember_m->*point_y;
	return s&&t;
}

int main(){
	M n;
	void(M :: *pointFunction)(int, int) = &M::get;      // objectname pointer to member function
	(n.*pointFunction)(12, 13);							// (object name .* pointer to member function)(datatype) = &Class :: member function; 
	cout << "sum = " << sum(n);

	M *pointerOperator = &n;                            //pointer to object// class *pointer = &object
	(pointerOperator->*pointFunction)(1, 2);			//(objectPointer ->* pointer to member function)(variables) 
	cout << "sum = " << sum(n);							

	cin.ignore();
	cout << "press return to exit...";
	cin.ignore();
}