#include "iostream"
main()
{
	using namespace std;
	int i,j,k;
	for (i=1;i<6;i++)
	{
		for(k=5;k>i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<i+1;j++)
		{
			cout<<"*";
		}	
		cout<<"\n";
	}		
	
}