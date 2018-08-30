//Write a program to print the address of a variable whose value is input from user.

#include "iostream"
using namespace std;
int main()
{
	int x,y,z,*p,*q,*r;
	p = &x;
	q = &y;
	r = &z;
	cin >> *p >> *q >> *r;
	if ( *p>*q)
	{
		if (*p>*r)
			cout<<*p;
		else 
			cout<<*r;
	}
	if (*p<*q)
	{
		if(*q>*r)
			cout<<*q;
		else 
			cout<< *r;
	}

}
