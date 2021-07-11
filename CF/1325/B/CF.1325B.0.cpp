#include<cstdio>
using namespace std;
int a[100000];
void qsort(int l,int r)// Sort the array in increasing order
{
	int x=l,y=r,std=a[(l+r)/2];
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
		for(int i=0;i<n;++i)
			scanf("%d",&a[i]);
		qsort(0,n-1);// Sort the array in increasing order
		int ans=n;// Count the number of different numbers
		for(int i=1;i<n;++i)
			if(a[i]==a[i-1])
				--ans;
		printf("%d\n",ans);
	}
	return 0;
}
