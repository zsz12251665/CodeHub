#include<cstdio>
using namespace std;
int d[100000],rank[100000],chain[200000];
void qsort(int l,int r)// Sort the pairs according to the distances
{
	int x=l,y=r,std=rank[(l+r)/2];
	while(x<y)
	{
		while(d[rank[x]]>d[std])
			++x;
		while(d[rank[y]]<d[std])
			--y;
		if(x<=y)
		{
			int tmp=rank[x];
			rank[x++]=rank[y];
			rank[y--]=tmp;
		}
	}
	if(l<y)
		qsort(l,y);
	if(x<r)
		qsort(x,r);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d",&d[i]);
		rank[i]=i;
	}
	qsort(0,n-1);// Sort the pairs according to the distances
	int len=n;// Form the main chain with the odd points
	chain[0]=2*rank[0]+1;
	for(int i=1;i<n;++i)
	{
		printf("%d %d\n",2*rank[i-1]+1,2*rank[i]+1);
		chain[i]=2*rank[i]+1;
	}
	for(int i=0;i<n;++i)// Adding the even points
		if(i+d[rank[i]]<len)// Check if the even node will extend the main chain
			printf("%d %d\n",chain[i+d[rank[i]]-1],2*rank[i]+2);
		else
		{
			printf("%d %d\n",chain[len-1],2*rank[i]+2);
			chain[len++]=2*rank[i]+2;
		}
	return 0;
}
