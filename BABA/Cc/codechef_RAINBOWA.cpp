#include "iostream"
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int N;
		cin>>N;
		int i;
		int arr[N];
		for(i=0;i<N;i++) {
			cin>>arr[i];
		}
		int b[1111];
		int k=0;
		int count;
		b[0] = arr[0];
		int flag1 = 0;
		int flag2 = 0;
		int a[1111] = {0};
		for(i=0;i<7;i++) {
			a[i] = i+1;
			a[12-i] = i+1;
		}
		
		
		for( i=0;i<N-1;i++) {
			if(arr[i] != arr[i+1]) {
				b[++k] = arr[i+1];
			    count++;
			}
				
		}
		for(i=0;i<count+1;i++) {
			if(b[i] != a[i])
				flag1 = 1;
		}
		for(i=0;i<N;i++) {
			if(arr[i] != arr[N-1-i])
				flag2 = 1;

		}
		if(flag1 == 0 && flag2 == 0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		

	}
	return 0;
}