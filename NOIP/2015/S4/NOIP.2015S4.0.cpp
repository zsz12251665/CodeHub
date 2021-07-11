#include<cstdio>
using namespace std;
int d[50001];
int main()
{
	int l,n,m;
	scanf("%d%d%d",&l,&n,&m);
	for(int i=0;i<n;++i)
		scanf("%d",&d[i]);
	d[n]=l;
	int left=0,right=l,ans;// Initialize the halving range
	while(left<=right)
	{
		int mid=(left+right)/2,tmp=0,cnt=0;// tmp is the last rock that is not removed, cnt counts the number of the rocks that has been removed
		for(int i=0;i<=n;++i)
			if(d[i]-tmp<mid)// Check if the distance is far enough
				++cnt;
			else
				tmp=d[i];
		if(cnt>m)// Check whether too many rocks are removed
			right=mid-1;
		else
		{
			ans=mid;// Update the answer
			left=mid+1;
		}
	}
	printf("%d",ans);
	return 0;
}
