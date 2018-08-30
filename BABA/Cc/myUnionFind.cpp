#include <iostream>

using namespace std;

int main()
{
	int length, sum = 0;
	cout << "Enter the number of elements in the array" << endl;
	cin >> length;
	int *marks = new int[length];
	for( int i = 0; i < length; i++ )            // entering marks of students
	{
		*(marks+i) = i;
	}
	for (int i =0;i< length; i++)

	cout << *(marks +i)<< endl;
	return 0;
}