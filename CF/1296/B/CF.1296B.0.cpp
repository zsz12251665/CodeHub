#include<cstdio>
using namespace std;
int main()
{
	int t;
	for(scanf("%d",&t);t>0;--t)
	{
		int s;
		long long ans=0;
		for(scanf("%d",&s);s>9;s=s/10+s%10)
			ans+=s-s%10;// Spend as many 10 burles as possible
		printf("%lld\n",ans+s);// Don't forget to spend the burles left
	}
	return 0;
}
