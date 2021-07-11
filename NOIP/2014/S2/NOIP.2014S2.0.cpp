#include<cstdio>
using namespace std;
 int des[400000],nxt[400000],h[200000];
int w[200000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i)// Initialize the adjacency table
		h[i]=-1;
	for(int i=1,u,v;i<n;++i)
	{
		scanf("%d%d",&u,&v);
		des[2*i-2]=v-1;// Put both sides of the edge into adjacency table
		des[2*i-1]=u-1;
		nxt[2*i-2]=h[u-1];
		nxt[2*i-1]=h[v-1];
		h[u-1]=2*i-2;
		h[v-1]=2*i-1;
	}
	for(int i=0;i<n;++i)
		scanf("%d",&w[i]);
	int sum=0,max=0;// sum is the sum of the united weights, max is the maximum united weight
	for(int i=0;i<n;++i)
	{
		int linear=0,square=0,first=-1,second=-1;// first keeps the first biggest weight and second keeps the second one
		for(int j=h[i];j!=-1;j=nxt[j])
		{
			if(first<w[des[j]])// Update the maximum two numbers
			{
				second=first;
				first=w[des[j]];
			}
			else
				if(second<w[des[j]])
					second=w[des[j]];
			linear=(linear+w[des[j]])%10007;// Update the linear sum
			square=(square+w[des[j]]*w[des[j]])%10007;// Update the square sum
		}
		if(first*second>max)
			max=first*second;
		sum=(sum+linear*linear-square)%10007;
	}
	printf("%d %d",max,sum);// Adding the sum
	return 0;
}
