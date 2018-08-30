#include "iostream"
using namespace std;


int findNumberOfDigits(int a) {
	int ctr = 1;
		while(a>10) {
		a = a/10;
		ctr++;
	}
	return ctr;
}

int findFirstDigit(int a) {
	while(a>=10) {
		a = a/10;
	}
	return a;
}

int findLastDigit(int a) {
	return a%10;
}

int findFirstNumber(int a) {
	int c;
	c = findNumberOfDigits(a);
	
	if(c==2) {
	int x,y;
	x = findFirstDigit(a);
	y = findLastDigit(a);

	if(a == 99)
		{return 101;}
	else if(x>y) 
		{a = a+(x-y);}
	else
		{a = 11*(x+1);}
	return a;

    }
    
}



int main() {
	int a;
	cin>>a;
	int b;
	cin>>b;
	int c;
	c = findNumberOfDigits(a);
	int d;
	d = findFirstDigit(101);
	int e;
	e = findFirstDigit(111);
	cout<<d<<endl;
	cout<<e<<endl;
	//cout<<c<<endl;
	//int f;
	//f = findFirstNumber(a);
	//cout<<f<<endl;
	
	return 0;

}