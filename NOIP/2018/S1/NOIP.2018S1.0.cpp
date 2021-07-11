#include<cstdio>
using namespace std;
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	int d,last=0;// For the first layer, all height should be added, so last will be 0
	for(int i=0;i<n;++i)
	{
		scanf("%d",&d);
		if(d>last)// If d>last, we need to add more operation to reach it
			ans+=d-last;
		last=d;
	}
	printf("%d",ans);
	return 0;
}
