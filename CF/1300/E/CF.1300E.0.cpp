#include<cstdio>
using namespace std;
double p[1000000];// p[i] is the numerator of the average
int q[1000000];// q[i] is the denominator of the average as well as the number of elements
int main()
{
	int n,size=0;// size is the number of elements inside the stack
	scanf("%d",&n);
	for(int i=0,tmp;i<n;++i)
	{
		scanf("%d",&tmp);
		p[size]=tmp;
		q[size]=1;
		while(size>0 && p[size]/q[size]<p[size-1]/q[size-1])// Average with the previous block
		{
			p[size-1]+=p[size];
			q[size-1]+=q[size];
			--size;
		}
		++size;
	}
	for(int i=0;i<size;++i)
		for(int j=0;j<q[i];++j)
			printf("%.10lf\n",p[i]/q[i]);
	return 0;
}
