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
		for(j=i;j>0;j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}		
	
}