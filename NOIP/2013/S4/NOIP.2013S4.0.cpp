#include<cstdio>
using namespace std;
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	int h,last=0;// For the first brick, all height should be added, so last will be 0
	for(int i=0;i<n;++i)
	{
		scanf("%d",&h);
		if(h>last)// If h>last, we need to add more operation to reach it
			ans+=h-last;
		last=h;
	}
	printf("%d",ans);
	return 0;
}
