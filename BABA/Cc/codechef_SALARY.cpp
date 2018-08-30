#include "iostream"
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++) {
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++) {
			cin>>arr[i];

		}
		cout<<arr[2];
		int count;
		int ctr=0;
		for(count=0;ctr<6;count++) {               
			for(i=1;i<N;i++) {
				if(arr[i] == arr[0])
					ctr++;
				
			}
			int max = arr[0];
			int pos;
			for(i=1;i<N;i++) {
				if(arr[i]>max)
					max = arr[i];
					pos = i;
			}
			for(i=0;i<N;i++) {
				if(i != pos)
					arr[i] = arr[i] + 1;
			}


		}
		cout<<count-1<<endl;
	}
}