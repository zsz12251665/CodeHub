#include<cstdio>
using namespace std;
int a[100000];
long long abs(long long a)
{
	return (a>0)?a:-a;
}
int main()
{
	int n,m,s1,s2,p1,p2=0;
	long long diff=0;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
		scanf("%d",&a[i]);
	scanf("%d%d%d%d",&m,&p1,&s1,&s2);
	a[p1-1]+=s1;
	--m;// C++ starts an array from 0, so remember to minus 1
	for(int i=0;i<n;++i)// Calculate the difference of their powers
		diff+=(long long)a[i]*(i-m);
	for(int i=0;i<n;++i)// Enumerate the position to put your soldiers
		if(abs((long long)s2*(i-m)+diff)<abs((long long)s2*(p2-m)+diff))// long long is required because the data can reach 5,000,000
			p2=i;
	printf("%d",p2+1);
	return 0;
}
