#include "iostream"

using namespace std;
class UnionFind
	{
		
		
	public:
				int *arr;
				int N;
				int i = 0;
				void UnionFind(int N)
				{
					int *arr = new int[N];
					for(i=0;i<N;i++)
						*(arr + i) = i;
				}
				int printelements()
				{
					return *(arr + 4);
					/*for(i=0;i<N;i++)
						cout << *(arr + i) << endl;*/
				}
	};
int main()
{
		UnionFind a(5);
		a.printelements();
		return 0;
	}	
