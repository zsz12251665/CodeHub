#include<cstdio>
using namespace std;
int a[500000],stack_c[500000],stack_v[500000];// stack_c[i] is the number of the same elements, stack_v[i] is the value of the elements
long long tot[500000];// tot[i] is the total number of floors with the peak at i
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		tot[i]=-a[i];// You will count a[i] twice in the following, so we subtract one in advance
	}
	int size=0;
	long long sum=0;// The total sum of the elements in the stack
	for(int i=0;i<n;++i)// From front to back
	{
		int cnt=1;
		while(size>0 && stack_v[size-1]>a[i])// Take the elements larger out to maintain the monotonicity
		{
			--size;
			cnt+=stack_c[size];
			sum-=(long long)stack_c[size]*stack_v[size];
		}
		stack_c[size]=cnt;// Push the new element into the stack
		stack_v[size]=a[i];
		++size;
		sum+=(long long)cnt*a[i];
		tot[i]+=sum;
	}
	size=0;
	sum=0;
	for(int i=n-1;i>=0;--i)// From back to front
	{
		int cnt=1;
		while(size>0 && stack_v[size-1]>a[i])// Take the elements larger out to maintain the monotonicity
		{
			--size;
			cnt+=stack_c[size];
			sum-=(long long)stack_c[size]*stack_v[size];
		}
		stack_c[size]=cnt;// Push the new element into the stack
		stack_v[size]=a[i];
		++size;
		sum+=(long long)cnt*a[i];
		tot[i]+=sum;
	}
	int ans=0;// Find the one with the largest total number of floors
	for(int i=1;i<n;++i)
		if(tot[i]>tot[ans])
			ans=i;
	for(int i=ans-1;i>=0;--i)// Shape the answer
		a[i]=(a[i+1]<a[i])?a[i+1]:a[i];
	for(int i=ans+1;i<n;++i)
		a[i]=(a[i-1]<a[i])?a[i-1]:a[i];
	for(int i=0;i<n;++i)// Output the answer
		printf("%d ",a[i]);
	return 0;
}
