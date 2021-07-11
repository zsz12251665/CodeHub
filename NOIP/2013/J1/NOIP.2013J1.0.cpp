#include<cstdio>
using namespace std;
int main()
{
	int n,ans=0;
	int x;
	scanf("%d%d",&n,&x);
	for(int i=0;i<n;++i)// Enumerate integers
	{
		int t=i+1;
		while(t>0)// Check it bit by bit
		{
			if(t%10==x)
				++ans;
			t/=10;
		}
	}
	printf("%d",ans);
	return 0;
}
