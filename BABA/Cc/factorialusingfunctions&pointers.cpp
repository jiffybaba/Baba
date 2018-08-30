#include "iostream"
using namespace std;



int factoial(int x)
{
if (x>=1)
	return factorial(x-1)*x
else 
	return 1;
}
int main()
{
	int x,*p;
	p = &x;
	cin>> *p;
	factorial(*p);
}
	
	

