#include<cstdio>
using namespace std;
int a[200000];
void qsort(int l,int r)// Sort the array in increase order
{
	int x=l,y=r;
	int std=a[(l+r)/2];
	while(x<y)
	{
		while(a[x]<std)
			++x;
		while(a[y]>std)
			--y;
		if(x<=y)
		{
			int tmp=a[x];
			a[x++]=a[y];
			a[y--]=tmp;
		}
	}
	if(l<y)
		qsort(l,y);
	if(x<r)
		qsort(x,r);
}
int main()
{
	int t;
	for(scanf("%d",&t);t>0;--t)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<2*n;++i)
			scanf("%d",&a[i]);
		qsort(0,2*n-1);
		printf("%d\n",a[n]-a[n-1]);
	}
	return 0;
}
