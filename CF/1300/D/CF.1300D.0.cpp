#include<cstdio>
using namespace std;
int x[100000],y[100000];
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==1)// There are odd points (edges)
	{
		printf("NO");
		return 0;
	}
	for(int i=0;i<n;++i)
		scanf("%d%d",&x[i],&y[i]);
	for(int i=0;i<n/2;++i)
		if(x[i+1]-x[i]!=x[i+n/2]-x[(i+n/2+1)%n]||y[i+1]-y[i]!=y[i+n/2]-y[(i+n/2+1)%n])// The vectors of the subtenses are not opposite to each other
		{
			printf("NO");
			return 0;
		}
	printf("YES");
	return 0;
}
