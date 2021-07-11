#include<cstdio>
using namespace std;
int num[200000],l[200000];
void qsort(int l,int r)// Sort the array num in increasing order
{
	int x=l,y=r,std=num[(l+r)/2];
	while(x<y)
	{
		while(num[x]<std)
			++x;
		while(num[y]>std)
			--y;
		if(x<=y)
		{
			int tmp=num[x];
			num[x++]=num[y];
			num[y--]=tmp;
		}
	}
	if(l<y)
		qsort(l,y);
	if(x<r)
		qsort(x,r);
}
int find(int a,int b,int p)// Find the position to be replaced
{
	if(a>b)
		return a;
	return (p>l[(a+b)/2])?find((a+b)/2+1,b,p):find(a,(a+b)/2-1,p);
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=0;i<a+b+c;++i)
		scanf("%d",&num[i]);
	qsort(0,a-1);// Sort everyone's problems to make sure their problems are increasing
	qsort(a,a+b-1);
	qsort(a+b,a+b+c-1);
	int len=1;// Searching for the longest increasing sequence
	l[0]=num[0];
	for(int i=1;i<a+b+c;++i)
		if(num[i]>l[len-1])
			l[len++]=num[i];
		else
			l[find(0,len,num[i])]=num[i];
	printf("%d",a+b+c-len);
	return 0;
}
