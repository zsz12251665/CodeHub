#include<cstdio>
using namespace std;
int a[100000],b[100000];// b[i] is all elements of the array a except a[i] merging together with the operator |
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	for(int i=0,tmp=0;i<n;++i)// Preprocessing the prefix
	{
		b[i]|=tmp;
		tmp|=a[i];
	}
	for(int i=n-1,tmp=0;i>=0;--i)// Preprocessing the suffix
	{
		b[i]|=tmp;
		tmp|=a[i];
	}
	for(int i=0;i<n;++i)// Find the maximum
		if((a[i]&~b[i])>(a[ans]&~b[ans]))
			ans=i;
	printf("%d",a[ans]);
	for(int i=0;i<n;++i)
		if(i!=ans)
			printf(" %d",a[i]);
	return 0;
}
