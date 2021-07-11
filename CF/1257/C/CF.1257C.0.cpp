#include<cstdio>
using namespace std;
int last[200000];// Array last records the last of position of the numbers
int main()
{
	int t;
	for(scanf("%d",&t);t>0;--t)
	{
		int n,a,min=2147483647;
		scanf("%d",&n);
		for(int i=0;i<=n;++i)// Initialize the array last
			last[i]=-1;
		for(int i=0;i<n;++i)// Scan the sequence to find the closest pairs
		{
			scanf("%d",&a);
			if(last[a]!=-1 && min>i-last[a]+1)
				min=i-last[a]+1;
			last[a]=i;
		}
		printf("%d\n",(min==2147483647)?-1:min);
	}
	return 0;
}
