#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	long long x=0;// x[1]=0
	for(int i=0,b;i<n;++i)
	{
		scanf("%d",&b);
		printf("%lld ",b+x);// a[i]=b[i]+x[i]
		if(b>0)// Update the maximum value
			x+=b;
	}
	return 0;
}
