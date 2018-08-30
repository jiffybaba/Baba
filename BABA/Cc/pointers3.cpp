//Write a program to print the address of a variable whose value is input from user.

#include "iostream"
using namespace std;
int main()
{
	int x;
	int *ptr = &x;
	cin >> *ptr;
		cout << *ptr<<endl;
	cout << ptr;
	;


}
