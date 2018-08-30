#include "iostream"
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		int c = b+1;
		bool arr[b+1];
		arr[0] = true;
		for(int i=1;i<c;i++)
			arr[i] = false;

		for(int i=0;i<c;i++)
			cout<<i<<" "<<arr[i]<<endl;


		for(int i=2;i<c;i++) {
			if(arr[i]==false) {
				
				int ans = i;
				while(ans<=b) {
					arr[ans+i] = true;
					ans = ans+i;
				}
			}

		}

		for(int i=0;i<c;i++)
			cout<<i<<" "<<arr[i]<<endl;

		/*for(int i=0;i<b+1;i++) {
			if(i>=a && arr[i]==0) 
				cout<<i<<endl;
		}*/

		cout<<endl;

}
}