#include<cstdio>
using namespace std;
int f[100000],c[100000];
int find(int p)
{
	if(f[p]!=p)
		f[p]=find(f[p]);
	return f[p];
}
void merge(int a,int b)// Merge the sets
{
	int fa=find(a),fb=find(b);
	if(c[fa]<c[fb])// Make sure the root of the set is the smallest
		f[fb]=fa;
	else
		f[fa]=fb;
}
int main()
{
	int n,m;
	long long ans=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
	{
		scanf("%d",&c[i]);
		f[i]=i;// Initialize the union find set
	}
	for(int i=0,x,y;i<m;++i)
	{
		scanf("%d%d",&x,&y);
		merge(x-1,y-1);
	}
	for(int i=0;i<n;++i)// Bribe the characters
		if(c[find(i)]!=-1)
		{
			ans+=c[find(i)];
			c[find(i)]=-1;
		}
	printf("%lld",ans);
	return 0;
}
