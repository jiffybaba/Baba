//Write a program to print the address of a variable whose value is input from user.

#include "iostream"
using namespace std;
int main()
{
	int x;
	cin>>x;
	int *ptr = &x;
	cout << ptr;
	;


}
