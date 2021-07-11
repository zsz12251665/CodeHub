#include<cstdio>
using namespace std;
int face[100000];
char job[100000][20];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
		scanf("%d%s",&face[i],&job[i]);
	int p=0;// Start from the 1st toy
	for(int i=0;i<m;++i)
	{
		int d,s;
		scanf("%d%d",&d,&s);
		if(face[p]==d)
			p+=n-s;// Move clockwise
		else
			p+=s;// Move counterclockwise
		p%=n;
	}
	printf("%s",job[p]);
	return 0;
}
