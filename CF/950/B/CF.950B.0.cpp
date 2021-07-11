#include<cstdio>
using namespace std;
int x[100000],y[100000];
int main()
{
	int n,m,ans=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
		scanf("%d",&x[i]);
	for(int i=0;i<m;++i)
		scanf("%d",&y[i]);
	for(int i=0,j=0,total_x=0,total_y=0;i<n || j<m;)
	{
		if(total_x>total_y)// Add the smaller one
			total_y+=y[j++];
		else
			total_x+=x[i++];
		if(total_x==total_y)// Add it to the counter
			++ans;
	}
	printf("%d",ans);
	return 0;
}
