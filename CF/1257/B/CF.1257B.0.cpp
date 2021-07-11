#include<cstdio>
using namespace std;
int main()
{
	int t;
	for(scanf("%d",&t);t>0;--t)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		printf((x>=y || x>3 || x==2 && y==3)?"YES\n":"NO\n");
	}
	return 0;
}
