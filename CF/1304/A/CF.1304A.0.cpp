#include<cstdio>
using namespace std;
int main()
{
	int t;
	for(scanf("%d",&t);t>0;--t)
	{
		int x,y,a,b;
		scanf("%d%d%d%d",&x,&y,&a,&b);
		printf("%d\n",(y>=x && (y-x)%(a+b)==0)?(y-x)/(a+b):-1);
	}
	return 0;
}
