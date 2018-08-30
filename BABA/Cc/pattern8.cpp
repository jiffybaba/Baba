#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
			cout<<' ';
		for(k=i;k>=1;k--)
			cout<<k;
		for(l=2;l<=i;l++)
			cout<<l;
		cout<<endl;
	}

	
	return 0;
}