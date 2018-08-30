#include "iostream"
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int N;
		cin>>N;
		int arr[N];
		int i,j;
		for(int i=0;i<N;i++) {
			cin>>arr[i];
		}
		int flag = 0;
		int temp = 0;
		int pos = 0;
		int min = 10;
		int loc =0;
		for(i=N-1;flag==0;i--) {
			if(arr[i] > arr[i-1]) {
				//cout<<i;
				for(j=i;j<N;j++) {
					if(arr[i-1] < arr[j] && arr[j]-arr[i-1] < min) {
						min = arr[j] - arr[i-1];
						loc = j;
					}
				}

				temp = arr[i-1];
				arr[i-1] = arr[loc];
				arr[loc] = temp;
				flag = 1;
				pos = i;

			}
		}
		//cout<<pos<<endl;
		//for(i=0;i<N;i++) {
			//cout<<arr[i];
		//}
		int index = 0;
		for(i=pos;i<N;i++) {
			int min = arr[i];
			for(int j=i;j<N;j++) {
				if(arr[j] <= min) {
					min = arr[j];
					index = j;
					//cout<<min<<index;
				}

			}
			temp = arr[index];
			arr[index] = arr[i];
			arr[i] = temp;

		}
		for(i=0;i<N;i++) {
			cout<<arr[i];
		}
		cout<<endl;
	}
}