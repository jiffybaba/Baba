#include "iostream"
#include "cstring"
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		char arr[1001];
		cin>>arr;
		int t = strlen(arr);
		//cout<<t<<endl;
		int flag = 0;
		int yes = 0;
		int ctr1 = 0;
		int ctr2 = 0;
		if(t%2 == 0){
			for(int i =0;i<t/2;i++) {
				for(int j =0;j<t/2;j++) {
					if(arr[i]==arr[j] && j<i)
						yes++;
				}
				if(yes==0) {
					for(int j=0;j<t/2;j++) {
						if(arr[i] == arr[j] && j >=i)
							ctr1++;

					}
					for(int j=t/2;j<t;j++) {
						if(arr[i]==arr[j])
							ctr2++;
					}
					//cout<<ctr1<< " " <<ctr2<<endl;
				if(ctr1 != ctr2)
					flag = 1;
				}
				

            }

		
		if(flag == 0)
			cout << "YES"<<endl;
		else
			cout << "NO"<<endl;
	}
	
	else {

			for(int i =0;i<t/2;i++) {
				for(int j =0;j<t/2;j++) {
					if(arr[i]==arr[j] && j<i)
						yes++;
				}
				if(yes==0) {
					for(int j=0;j<t/2;j++) {
						if(arr[i] == arr[j] && j >=i)
							ctr1++;

					}
					for(int j=t/2 + 1;j<t;j++) {
						if(arr[i]==arr[j])
							ctr2++;
					}
				}
				//cout<<ctr1<< " " <<ctr2<<endl;
				if(ctr1 != ctr2)
					flag = 1;

            }

		
		if(flag == 0)
			cout << "YES"<<endl;
		else
			cout << "NO"<<endl;
	}
}
	return 0;
}