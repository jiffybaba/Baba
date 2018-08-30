#include<iostream>
#include<math.h>
using namespace std;

int digits(int a) {
	int c = 0;
	if(a==0)
		return 1;
	else
	{
	while(a!=0) {
		a = a/10;
		c++;
	}
	return c;
	}

}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		int p,q;
		p = digits(a);
		q = digits(b);
		int x=0,y=0;

		for(int i=p;i>0;i--) {
			int rem=0;
			rem = a%10;
			x = x + rem*pow(10,i-1);
			a = a/10;
		}

		//cout<<x<<endl;

		for(int i=q;i>0;i--) {
			int rem=0;
			rem = b%10;
			y = y + rem*pow(10,i-1);
			b = b/10;
		}

		//cout<<y<<endl;

		int z;
		z = x+y;

		//cout<<z<<endl;

		int c;
		c = digits(z);
		int m=0;

		for(int i=c;i>0;i--) {
			int rem=0;
			rem = z%10;
			m = m + rem*pow(10,i-1);
			z = z/10;
		}

		cout<<m<<endl;





	}
}

	
