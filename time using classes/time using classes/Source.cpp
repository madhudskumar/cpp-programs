//This programe illustrates using objects as function arguments
//author : madhu Kumar d s
//23 july 2014 06hr 29min <24>

#include<iostream>

using namespace std;

class time
{
public:
	void getTime(int h, int m, int s, int d, int y);
	void returnTime(time & a);
	void sum(time a,time b);
private:
	int seconds;
	int minutes;
	int hours;
	int days;
	int years;

};

void time::getTime(int h, int m, int s, int d, int y){
	hours = h;
	minutes = m;
	seconds = s;
	days = d;
	years = y;
}

void time::returnTime(time & a){
	std::cout << endl << "seconds = " << a.seconds
		<< endl << "minutes = " << a.minutes
		<< endl << "hours = " << a.hours
		<< endl << "days = " << a.days
		<< endl << "years = " << a.years;
}

void time ::sum(time a,time b ){
	seconds = a.seconds + b.seconds;
	minutes = a.minutes + b.minutes;
	hours = a.hours + b.hours;
	days = a.days + b.days;
	years = a.years + b.years;
	
}

int main(){
	std::cout << "THIS PROGRAME ILLUSTRATES USING OBJECTS AS ARGUMENTS AND ALSO"
		<< "returning objects" << endl;
	time c1;
	time c2;
	time c3;

	c1.getTime(1, 2, 3, 4, 5);
	c2.getTime(6, 7, 8, 9, 0);
	
	c1.returnTime(c1);
	c2.returnTime(c2);
	c3.sum(c1, c2);
	c3.returnTime(c3);

	std::cin.ignore();
	std::cout << "press a return to exit....";
	std::cin.ignore();

}