#include "iostream"
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i =0;i<t;i++) {
		int flag = 0;
		int arr[4];
		for(int i = 0;i<4;i++) {
			cin>>arr[i];
		}
		for(int i=0;i<arr[3];i++) {
			int a,b;
			cin>>a>>b;
			if(a+arr[1]>=arr[0] && b<=arr[2])
				flag = 1;
		}
		if(flag==1)
			cout<<"LuckyChef"<<endl;
		else
			cout<<"UnluckyChef"<<endl;
	}
	return 0;
	 
}