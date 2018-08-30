#include "iostream"
using namespace std;
int main() {
	int t;
	cin>>t;
	for (int i =0;i<t;i++) {
		int a,b;
		cin>> a>>b;
		int arr[a],sum = 0;
		for(int j=0;j<a;j++) {
			cin>>arr[j];
			sum = sum + arr[j];
		}
		if(b>=sum) 
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
	}
}