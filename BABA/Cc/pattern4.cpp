#include "iostream"
main()
{
	using namespace std;
	int i,j,k,a=9;
	for (i=1;i<6;i++)
	{
		for(k=a;k>i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<i+1;j++)
		{
			cout<<"*";
		}	
		a--;
		cout<<"\n";
	}		
	
}