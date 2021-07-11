#include<cstdio>
using namespace std;
int a[40000],b[40000],cnt_a[40000],cnt_b[40000];
void qsort(int a[],int l,int r)// Sort the array in decrasing order
{
	int x=l,y=r,std=a[(l+r)/2];
	while(x<y)
	{
		while(a[x]>std)
			++x;
		while(a[y]<std)
			--y;
		if(x<=y)
		{
			int tmp=a[x];
			a[x++]=a[y];
			a[y--]=tmp;
		}
	}
	if(l<y)
		qsort(a,l,y);
	if(x<r)
		qsort(a,x,r);
}
int main()
{
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int len_a=0,len_b=0;// Calculate the number of consecutive 1s
	a[0]=b[0]=0;
	for(int i=0;i<n;++i)
	{
		int tmp;
		scanf("%d",&tmp);
		if(tmp==0 && a[len_a]>0)
			a[++len_a]=0;
		if(tmp==1)
			++a[len_a];
	}
	if(a[len_a]>0)
		++len_a;
	for(int i=0;i<m;++i)
	{
		int tmp;
		scanf("%d",&tmp);
		if(tmp==0 && b[len_b]>0)
			b[++len_b]=0;
		if(tmp==1)
			++b[len_b];
	}
	if(b[len_b]>0)
		++len_b;
	qsort(a,0,len_a-1);
	qsort(b,0,len_b-1);
	cnt_a[0]=cnt_b[0]=n=m=0;// Combine the consecutive 1s with same length together
	for(int i=0;i<len_a;++i)
		if(a[i]==a[n])
			++cnt_a[n];
		else
		{
			cnt_a[++n]=1;
			a[n]=a[i];
		}
	if(cnt_a[n]>0)
		++n;
	for(int i=0;i<len_b;++i)
		if(b[i]==b[m])
			++cnt_b[m];
		else
		{
			cnt_b[++m]=1;
			b[m]=b[i];
		}
	if(cnt_b[m]>0)
		++m;
	long long ans=0;
	for(int i=1;i*i<=k;++i)// Enumerate the height and width and calculate the number of subrectangles filled with 1s
		if(i*i==k)
			for(int i_a=0;i_a<n && a[i_a]>=i;++i_a)
				for(int i_b=0;i_b<m && b[i_b]>=i;++i_b)
					ans+=(long long)(a[i_a]-i+1)*(b[i_b]-i+1)*cnt_a[i_a]*cnt_b[i_b];
		else
			if(k%i==0)
			{
				for(int i_a=0;i_a<n && a[i_a]>=i;++i_a)// i*(k/i)
					for(int i_b=0;i_b<m && b[i_b]>=k/i;++i_b)
						ans+=(long long)(a[i_a]-i+1)*(b[i_b]-k/i+1)*cnt_a[i_a]*cnt_b[i_b];
				for(int i_a=0;i_a<n && a[i_a]>=k/i;++i_a)// (k/i)*i
					for(int i_b=0;i_b<m && b[i_b]>=i;++i_b)
						ans+=(long long)(a[i_a]-k/i+1)*(b[i_b]-i+1)*cnt_a[i_a]*cnt_b[i_b];
			}
	printf("%lld",ans);
	return 0;
}
