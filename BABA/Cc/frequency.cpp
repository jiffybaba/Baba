#include <iostream>

using namespace std;

int main()
{
	int length, sum = 0;
	int j;
	cout << "Enter the number of elements in the array" << endl;
	cin >> length;
	int *marks = new int[length];
	for( int i = 0; i < length; i++ )            // taking input, the array elements.
	{
		cin >> *(marks+i);
	}
	for (int i =0; i<length; i++)
	{
		int yes = 0;
		int ctr = 1;
		
		
			for(int j = 0; j< length; j++)
			{
			if (*(marks+i) == *(marks + j) && j < i)
				yes++;
		}
			if (yes == 0)
			{
			for(int j = 0; j< length; j++)
			
			{if (*(marks + i) == *(marks + j) && j > i)
					ctr++;	
				}
cout << "The frequency of " << *(marks + i) << " is " << ctr << endl;
			}
		
	
	}
	return 0;
}