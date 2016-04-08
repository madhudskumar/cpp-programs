/*
class:date 
to accept date and add them as objects as operator overloading
ie substract the two objects
*/

#include<iostream>
#include<iomanip>

using namespace std;

class date
{
public:
	void create();
	int operator -(date);
	void operator +(int);
private:
	int dd, mm, yy;
};

void date::create(){
x:	
	cout << "\nenter date <dd\\mm\\yy> : "; cin >> dd >> mm >> yy;

	if (mm == 2 && dd > 29){
		cout << "\n invalid date \n";
		goto x;
	}

	if (mm > 12 || dd > 31){
		cout << "\n invalid date \n";
		goto x;
	}
}

int date::operator - (date d2){
	int nod1, nod2, nody, lc;
	nod1 = nod2 = nody = lc = 0;

	//for first date
	for (int i = 0; i < mm; i++){
		if (i == 4 || 6 || 9 || 12) nod1 += 30;
		else if (i == 2) nod1 += 28;
		else nod1 += 31;
	}
	nod1 += dd;

	//for second date
	for (int i = 0; i < d2.mm; i++){
		if (i == 4 || 6 || 9 || 11) nod2 += 30;
		else if (i == 2) nod2 += 28;
		else nod2 += 31;
	}
	nod2 += d2.dd;

	//for no of years;
	nody = (yy - d2.yy) * 365;

	//for a leap lear
	for (int i = d2.yy ; i < yy; i++)
	if (i % 4 == 0)
		lc += 1;
	
	//for second i/p date not a leap
	if ((mm < 3) && (yy % 4 == 0)) lc -= 1;
	if ((d2.mm > 3) && (d2.yy%4 == 0) ) lc -= 1;

	int sum = nody + nod1 - nod2 + lc;

	if (sum > 0){
		cout << "\n\nNo of days are ::";
		return sum;
	}

	return sum;
}

void date :: operator + (int nod){

	// to reduce external dates
	// to reduce to months
	while (nod > 365)
	{
		yy += 1;
		nod -= 365;
	}

	// to reduce to days
	while (nod > 31){
		if (mm == 1 || 3 || 5 || 7 || 8 || 10 || 12){
			mm += 1;
			nod -= 31;
		}
		else if (mm == 2 && yy % 4 != 0){
			mm += 1;
			nod -= 28;
		}
		else if (mm == 2 && yy % 4 == 0){
			mm += 1;
			nod -= 29;
		}
		else {
			mm += 1;
			nod -= 30;
		}
	}
	// to add the remaining dates
	dd += nod;

	// to reduce internal dates
	// double check after
	// if dd > 30

	if (dd > 30){
		if (mm == 4 || 6 || 9 || 11){
			mm += 1;
			dd -= 30;
		}
		else if (mm == 2 && yy % 4 == 0 && dd>29){
			mm += 1;
			dd -= 29;
		}
		else if (mm == 2 && yy % 4 != 0 && dd > 28){
			mm += 1;
			dd -= 28;
		}
	}

	if (dd > 31){
		mm += 1;
		dd -= 31;
	}

	if (mm > 12){
		yy += 1;
		mm -= 12;
	}


	cout << "\n\n New date is <dd\\mm\\yyyy> " << dd << "\\" << mm << "\\" << yy;
}

int main(){
	date d1, d2;

begin:
	cout << "\n\n ENTER DTAES\n";
	cout << "\nd1 :: "; d1.create();
	cout << "\nd2 :: "; d2.create();

	int diff = d1 - d2;

	if (diff < 0){
		cout << "first date should be greater than secondn\n";
		cin.ignore();
		cin.ignore();
		system("cls");
		goto begin;
	}

	cout << diff;

	int nod;

	cout << "\nEnter no of days to add to the first date :: "; cin >> nod;
	d1 + nod;

	cin.ignore();
	cin.ignore();
	system("cls");
	cout << "ENTER ANY KEY TO EXIT .. ";
	cin.ignore();
	return 1;
}