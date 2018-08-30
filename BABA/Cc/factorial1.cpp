#include "iostream"
using namespace std;



int factorial(int x)
{
	int t = *x;
if (t>=1)
	return t*factorial(&t-1);
else 
	return 1;
}
int main()
{
	int x;
	
	cin>> x;
	
	factorial(x);
}
	
	

