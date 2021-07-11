#include<cstdio>
using namespace std;
int cost[200000];
void qsort(int l,int r)// Sort the cost array in increasing order
{
	int x=l,y=r,std=cost[(l+r)/2];
	while(x<y)
	{
		while(cost[x]<std)
			++x;
		while(cost[y]>std)
			--y;
		if(x<=y)
		{
			int tmp=cost[x];
			cost[x++]=cost[y];
			cost[y--]=tmp;
		}
	}
	if(l<y)
		qsort(l,y);
	if(x<r)
		qsort(x,r);
}
int main()
{
	int n,a,b,k;
	scanf("%d%d%d%d",&n,&a,&b,&k);
	for(int i=0,h;i<n;++i)// Calculate the cost
	{
		scanf("%d",&h);
		h=(h-1)%(a+b)+1;
		cost[i]=(h<=a)?0:(h-1)/a;
	}
	qsort(0,n-1);// Sort the cost
	int ans=0;
	for(int i=0;i<n && k>=cost[i];++i)// Choose greedily
	{
		k-=cost[i];
		++ans;
	}
	printf("%d",ans);
	return 0;
}
