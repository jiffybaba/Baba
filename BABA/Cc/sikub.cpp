#include "iostream"
#include "cmath"
using namespace std;

int findNumberOfDigits(int a) {
	int ctr = 1;
		while(a>=10) {
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
	if(c==1)
		return a+1;
	else if(c==2) {
	int x,y;
	x = findFirstDigit(a);
	y = findLastDigit(a);
	if(a==99)
		return 101;
	else if(x>y) 
		a = a+(x-y);
	else
		a = 11*(x+1);
	return a;

    }
    else {
    int x,y;
	x = findFirstDigit(a);
	y = findLastDigit(a);
	int r;
	r = findNumberOfDigits(a);
	if(a==pow(10,r)-1)
		a = a+2;
	else if(x>y) 
		a = a+(x-y);
	else if(findFirstDigit(a+10) > x)
		a = a+(11+x-y);
	else 
		a = a+(10+x-y);
	return a;

    }
}

void printAllNumbers(int a, int b) {
	int c;
	c = findNumberOfDigits(a);
	if(c==1) {
		for(int i=a;i<9;i++) {
			a=i+1;
			if(a<b)
			 cout<<a<<endl;
		}
		if(a==9 && a<b){
			cout<<11<<endl;
			a =11;
			printAllNumbers(a,b);
		}
	

	}
	else if(c==2) {
	int x;
	x=a+10;
	int p,q;
	p = findFirstDigit(a);
	q = findFirstDigit(x);
	if(a==99)
		a = 101;
	else 
		a= a+11;

	if(a<=b) {
		cout<<a<<endl;
		printAllNumbers(a,b);
  	}
	}
	else {
	int x;
	x=a+10;
	int p,q;
	p = findFirstDigit(a);
	q = findFirstDigit(x);
	int r;
	r = findNumberOfDigits(a);
	if(a==pow(10,r)-1)
		a = a+2;
	else if(q!=p)
		a = a+11;
	else
		a = a+10;

	if(a<=b) {
		cout<<a<<endl;
		printAllNumbers(a,b);
	}
	}

}

int main() {
	int a;
	cin>>a;
	int b;


	cin>>b;
	cout<<endl;
	int c;
	c = findFirstNumber(a);
	if(c>=b)
		cout<<"LOL"<<endl;
	else
		cout<<c<<endl;
	printAllNumbers(c,b);
	return 0;

}