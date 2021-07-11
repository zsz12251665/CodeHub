#include<cstdio>
using namespace std;
char s[200000];
int g[200000],l[200000];// g[i] is the number of '>' following consecutively and l[i] is the number of '<' following consecutively
int main()
{
	int t;
	for(scanf("%d",&t);t>0;--t)
	{
		int n;
		scanf("%d%s",&n,s);
		g[n-1]=l[n-1]=0;// Calculate g[i] and l[i]
		for(int i=n-2;i>=0;--i)
		{
			g[i]=(s[i]=='<')?0:g[i+1]+1;
			l[i]=(s[i]=='>')?0:l[i+1]+1;
		}
		printf("%d",n-l[0]);// The lexicographically largest sequence
		for(int i=1,last=n;i<n;++i)
		{
			if(s[i-1]=='>')
				last=n-i;
			printf(" %d",last-l[i]);
		}
		putchar('\n');
		printf("%d",1+g[0]);// The lexicographically smallest sequence
		for(int i=1,last=1;i<n;++i)
		{
			if(s[i-1]=='<')
				last=1+i;
			printf(" %d",last+g[i]);
		}
		putchar('\n');
	}
	return 0;
}
