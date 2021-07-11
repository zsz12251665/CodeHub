#include<cstdio>
using namespace std;
int main()
{
	int t;
	for(scanf("%d",&t);t>0;--t)
	{
		int n,x,y;
		scanf("%d%d%d",&n,&x,&y);
		if(x+y>n)
			printf("%d %d\n",(x+y==2*n)?n:x+y+1-n,n);
		else
			printf("%d %d\n",1,x+y-1);
	}
	return 0;
}
