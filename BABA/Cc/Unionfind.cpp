#include "iostream"
#include "vector"
using namespace std;
class UnionFind
	{
		public:
		vector<int> arr;
		int N;
		int i = 0;
		
				UnionFind(int N)
				{
					vector<int> arr(N);
					for(i=0;i<N;i++)
						arr[i] = i;
				}
				int printelements()
				{
					return arr[4];
					/*for(i=0;i<N;i++)
						cout << arr[i];*/
				}
	};
int main()
{
		UnionFind a(10);
		a.printelements();
		return 0;
	}	
