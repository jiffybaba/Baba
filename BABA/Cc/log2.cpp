#include "iostream"
#include "cmath"
main(){
	using namespace std;
	float n;
	float i,a = 1;
	cin>> n;
	for (i=2;i<n+1;i++)
		{
			a = a + pow(-1,i+1)*(1/i);
		}
	cout<< a;
}